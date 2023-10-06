package dao;
import java.util.ArrayList;
import dto.Book;

//상품 리스트
public class BookRepository {
	private ArrayList<Book> listOfBooks = new ArrayList<Book>();
	private static BookRepository instance = new BookRepository();
	
	public static BookRepository getInstance() {
		return instance;
	}
	
    public BookRepository(){
        Book book1 = new Book("N1","HTML5+CSS",15000);
        book1.setPname("HTML5+CSS");
        book1.setDescription("워드나 PPT문서를 만들수 있나요? 그러면 문가 없습니다. 지금 바로 웹페이지에 도전하세요.");
        book1.setCategory("HelloCoding");
        book1.setPublisher("한빛미디어");
        book1.setAuthor("황재호");
		book1.setTotalPages(268);
		book1.setUnitsInStock(1500);
		book1.setReleaseDate("2018/03/07");
        
        Book book2 = new Book("N2","쉽게 배우는 자바 프로그래밍",27000);
        book2.setPname("쉽게 배우는 자바 프로그래밍");
        book2.setDescription("객체지향의 핵심과 자바의 현대적 기능을 다루면서 초보자가 쉽게 학습할 수 있습니다.");
        book2.setCategory("IT모바일");
        book2.setPublisher("한빛아카데미");
        book2.setAuthor("우종중");
		book2.setTotalPages(308);
		book2.setUnitsInStock(2000);
		book2.setReleaseDate("2016/09/01");
        
        Book book3 = new Book("N3","스프링4 입문",27000);
        book3.setPname("스프링4 입문");
        book3.setDescription("스프링은 단순 사용 방법만 익히는 것보다 아키텍쳐를 이해하는 게 중요합니다!");
        book3.setCategory("IT모바일");
        book3.setPublisher("한빛미디어");
        book3.setAuthor("하세가와유이치,오오노와타루,토키코헤이(권은철, 전민수)");
		book3.setTotalPages(189);
		book3.setUnitsInStock(3000);
		book3.setReleaseDate("2019/05/03");
        
        listOfBooks.add(book1);
        listOfBooks.add(book2);
        listOfBooks.add(book3);
        
    }

	public ArrayList<Book> getAllBooks(){
		return listOfBooks;
	}
	
	public void addBook(Book book) { 
		listOfBooks.add(book);
	}

    
	public Book getBookById(String bookId){
		Book bookById = null;
		
		for (int i=0; i< listOfBooks.size(); i++) {
			Book book = listOfBooks.get(i);
			if (book != null && book.getBookId()!=null && book.getBookId().equals(bookId)) {
				bookById = book;
				break;
			}
		}
		return bookById;
	}
    
}
 
