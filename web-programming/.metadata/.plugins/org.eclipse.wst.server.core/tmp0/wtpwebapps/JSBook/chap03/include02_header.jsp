
<%!
	int pageCount=0;
	void addCount(){
		pageCount++;
	}
%>


<%
	addCount();
%>
<p>page visitors are <%=pageCount %>.</p>