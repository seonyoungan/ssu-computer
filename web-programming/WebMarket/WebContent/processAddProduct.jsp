<%@ page contentType="text/html; charset=UTF-8" %>
<%@ page import="dto.Product" %>
<%@ page import="dao.ProductRepository" %>
<%@ page import="java.util.concurrent.Flow.Publisher" %>
<%@ page import="com.oreilly.servlet.*" %>
<%@ page import="com.oreilly.servlet.multipart.*" %>
<%@ page import="java.util.*" %>

<%
	request.setCharacterEncoding("utf-8");

	String filename = "";
	String realFolder = "/Users/anseon-yeong/Desktop/23-02/web/upload"; //웹 애플리케이션 상의 절대경로
	int maxSize = 5*1024*1024; // 최대업로드될 파일의 크기는 5MB 
	String encType = "utf-8"; //인코딩 유형 
	
	MultipartRequest multi = new MultipartRequest(request, realFolder, maxSize, encType, new DefaultFileRenamePolicy());
	
	String productId = multi.getParameter("productId");
	String name = multi.getParameter("name");
	String unitPrice = multi.getParameter("unitPrice");
	String manufacturer = multi.getParameter("manufacturer");
	String description = multi.getParameter("description");
	String category = multi.getParameter("category");
	String unitsInStock = multi.getParameter("unitsInStock");
	String condition = multi.getParameter("condition");

	Integer price;
	
	if(unitPrice != null && unitPrice.isEmpty()){
		price=0;
	}
	else{
		price=Integer.valueOf(unitPrice);
	}
	
 	long stock;
	
	if(unitsInStock != null && unitsInStock.isEmpty()){
		stock=0;
	} 
	else{
		stock=Long.valueOf(unitsInStock);
	}
	
	Enumeration files = multi.getFileNames();
	String fname = (String) files.nextElement();
	String fileName = multi.getFilesystemName(fname);
	
	ProductRepository dao=ProductRepository.getInstance();
	
	Product newProduct=new Product();
	newProduct.setProductId(productId);
	newProduct.setPname(name);
	newProduct.setUnitPrice(price);
	newProduct.setManufacturer(manufacturer);
	newProduct.setDescription(description);
	newProduct.setCategory(category);
	newProduct.setUnitsInStock(stock);
	newProduct.setCondition(condition);
	newProduct.setFilename(fileName);
	
	dao.addProduct(newProduct);
	
	response.sendRedirect("products.jsp");
%>