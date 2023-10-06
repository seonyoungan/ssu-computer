package dto;
import java.io.Serializable;;


public class Book implements Serializable{

	private static final long serialVersionUID = -4274700572038677000L;
	
	private String BookId; //도서아이디
	private String pname; //상품명
	private Integer unitPrice; //도서가격
	private String description;; //도서설명
	private String author; //저자
	private String publisher; //출판사
	private String category; //분류
	private long unitsInStock; //재고
	private long totalPages; //페이지 수
	private String releaseDate; //출판일(월/년)
	private String condition; //신규도서 또는 중고도서 또는 E-book
	
	public Book() {
		super();
	}

	public Book(String bookId, String pname, Integer unitPrice) {
		this.BookId = bookId;
		this.pname = pname;
		this.unitPrice=unitPrice;
	}
	
	public String getBookId() {
		return BookId;
	}

	public void setBookId(String bookId) {
		BookId = bookId;
	}

	public String getPname() {
		return pname;
	}

	public void setPname(String pname) {
		this.pname = pname;
	}

	public Integer getUnitPrice() {
		return unitPrice;
	}

	public void setUnitPrice(Integer unitPrice) {
		this.unitPrice = unitPrice;
	}

	public String getDescription() {
		return description;
	}

	public void setDescription(String description) {
		this.description = description;
	}

	public String getPublisher() {
		return publisher;
	}

	public void setPublisher(String publisher) {
		this.publisher = publisher;
	}

	public String getAuthor() {
		return author;
	}

	public void setAuthor(String author) {
		this.author = author;
	}
	
	public String getCategory() {
		return category;
	}

	public void setCategory(String category) {
		this.category = category;
	}

	public long getUnitsInStock() {
		return unitsInStock;
	}

	public void setUnitsInStock(long unitsInStock) {
		this.unitsInStock = unitsInStock;
	}
	
	public long getTotalPages() {
		return totalPages;
	}

	public void setTotalPages(long totalPages) {
		this.totalPages = totalPages;
	}


	public String getReleaseDate() {
		return releaseDate;
	}

	public void setReleaseDate(String releaseDate) {
		this.releaseDate = releaseDate;
	}

	public String getCondition() {
		return condition;
	}

	public void setCondition(String condition) {
		this.condition = condition;
	}
	
	
}
