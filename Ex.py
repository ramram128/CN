import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.util.Scanner;

public class DnsClient {
    public static void main(String[] args) {
        DatagramSocket socket = null;
        try {
            socket = new DatagramSocket();
            Scanner scanner = new Scanner(System.in);

            System.out.print("Enter the DNS server address: ");
            String serverAddress = scanner.nextLine();
            InetAddress serverInetAddress = InetAddress.getByName(serverAddress);

            System.out.print("Enter the frame size: ");
            int frameSize = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            System.out.print("Enter the message to send: ");
            String message = scanner.nextLine();

            if (message.length() > frameSize) {
                System.out.println("Message exceeds frame size. Truncating message.");
                message = message.substring(0, frameSize);
            }

            byte[] buffer = message.getBytes();
            DatagramPacket packet = new DatagramPacket(buffer, buffer.length, serverInetAddress, 53);
            socket.send(packet);

            System.out.println("Message sent to DNS server: " + message);

            byte[] responseBuffer = new byte[512];
            DatagramPacket responsePacket = new DatagramPacket(responseBuffer, responseBuffer.length);
            socket.receive(responsePacket);

            String response = new String(responsePacket.getData(), 0, responsePacket.getLength());
            System.out.println("Response from DNS server: " + response);

        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            if (socket != null && !socket.isClosed()) {
                socket.close();
            }
        }
    }
}
