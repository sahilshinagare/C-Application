import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

public class SQLPreparedStatementDelete{

	public static void main(String[] args) {
		try{  
			Class.forName("com.mysql.jdbc.Driver");  
			Connection con=DriverManager.getConnection(  
			"jdbc:mysql://localhost:3306/xyz?characterEncoding=latin1","root","root");  
			
			PreparedStatement stmt = con.prepareStatement("delete from pqr where city=?");
			stmt.setString(1,"Baramati");
			
			
			int i = stmt.executeUpdate();
			System.out.println(i + "Records deleted");
			con.close();  
		}
		catch(Exception e){ 
			System.out.println(e);
		}  

	}

}