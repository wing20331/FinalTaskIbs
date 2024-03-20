Action()
{

	lr_start_transaction("UC_5_UpdatePayment");

	
	lr_start_transaction("Index");

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1710165323224\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("WwWwW", 
		lr_unmask("65ef10a61c56102db1639f6f"), 
		"www.advantageonlineshopping.com:443");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_reg_find("Text=<header ng-show\=\"welcome\" data-ng-cloak>",
		LAST);

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	
	web_reg_find("Text=parameters",
		LAST);

	
	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	
	web_reg_find("Text=allowUserConfiguration>true",
		LAST);

	
	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);


	
	web_reg_save_param_json(
		"ParamName=category",
		"QueryString=$[*].categoryName",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		LAST);
	
	
	web_reg_find("Text=LAPTOPS",LAST);
	web_reg_find("Text=SPEAKERS",LAST);
	web_reg_find("Text=TABLETS",LAST);
	web_reg_find("Text=HEADPHONES",LAST);
	web_reg_find("Text=MICE",LAST);

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710166110.1.0.1710166110.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.1.2059144383.1710166110; DOMAIN=www.advantageonlineshopping.com");
	
	web_reg_find("Text=description",
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_find("Text=productName",
		LAST);

	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_find("Text=five pictures",
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Index",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("logIn");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	
	web_reg_save_param_regexp(
		"ParamName=authorization",
		"RegExp=authorization>(.+?)<",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=UserID",
		"RegExp=userId>(.+?)<",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	web_reg_find("Search=Body",
		"Text=<ns2:success>true</ns2:success>",
		LAST);

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{email}</email><loginPassword>{password}</loginPassword><loginUser>{userName}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);


	web_set_sockets_option("INITIAL_AUTH", "BASIC");
	
	
	
	web_reg_save_param_json(
		"ParamName=SessionId",
		"QueryString=$.sessionId",
		SEARCH_FILTERS,
		LAST);
	
	web_add_header("Authorization", 
		"Basic {authorization}");


	web_reg_find("Text=userId\":{UserID}",
		LAST);

	
	web_url("Cartmb", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	

	
	web_add_cookie("JSESSIONID={SessionId}; DOMAIN=www.advantageonlineshopping.com");

	lr_end_transaction("logIn",LR_AUTO);
	
	lr_think_time(5);
	
	//заполнения метода оплаты 
	
	lr_start_transaction("paymentUpdateSafe");
	
	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAddSafePayMethodRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_find("Text=<ns2:success>true</ns2:success><ns2:id>0</ns2:id><ns2:reason>SafePay data updated successfully",
		LAST);

	
	web_custom_request("AddSafePayMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AddSafePayMethodRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><safePayUsername>{payName}</safePayUsername><accountId>{UserID}</accountId><safePayPassword>{payPass}</safePayPassword><base64Token>Basic {authorization}</base64Token></"
		"AddSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	lr_end_transaction("paymentUpdateSafe", LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("paymentUpdateMaster");

	
	
	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountservicePaymentMethodUpdateRequest");
	
	web_reg_find("Text=<ns2:success>true</ns2:success>",
		LAST);

	web_custom_request("PaymentMethodUpdateRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/PaymentMethodUpdateRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><PaymentMethodUpdateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><paymentMethod>10</paymentMethod><base64Token>Basic {authorization}</base64Token></PaymentMethodUpdateRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	
	
	
	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAddMasterCreditMethodRequest");
	
	web_reg_find("Text=<ns2:success>true</ns2:success>",
		LAST);

	web_custom_request("AddMasterCreditMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AddMasterCreditMethodRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddMasterCreditMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><cardNumber>4886{cardNumber}</cardNumber><expirationDate>{expDate}{expYear}</expirationDate><cvvNumber>{cvc}</cvvNumber><customerName>{name} {fam}</customerName><accountId>{UserID}</accountId>"
		"<base64Token>Basic {authorization}</base64Token></AddMasterCreditMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountservicePaymentMethodUpdateRequest");
	
	web_reg_find("Text=<ns2:success>true</ns2:success>",
		LAST);

	web_custom_request("PaymentMethodUpdateRequest_2", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/PaymentMethodUpdateRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><PaymentMethodUpdateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><paymentMethod>20</paymentMethod><base64Token>Basic {authorization}</base64Token></PaymentMethodUpdateRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	lr_end_transaction("paymentUpdateMaster", LR_AUTO);
	
	lr_think_time(5);

	
	lr_start_transaction("logOut");


	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_find("Search=Body",
		"Text=<ns2:success>true</ns2:success>",
		LAST);

	web_custom_request("AccountLogoutRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{UserID}</loginUser><base64Token>Basic {authorization}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	lr_end_transaction("logOut", LR_AUTO);
	
	lr_end_transaction("UC_5_UpdatePayment", LR_AUTO);


	return 0;
}