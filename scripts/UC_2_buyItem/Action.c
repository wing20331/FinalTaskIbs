Action()
{
	
	int totalProducts;
	int randomIndex;
	char randomProductId[100];
	int stock;
	
	
	
	lr_start_transaction("UC_2_buyItem");


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
	
	lr_think_time(10);

	lr_start_transaction("chooseProduct");
	
	
	web_reg_save_param_json(
		"ParamName=categoryChoosen",
		"QueryString=$.categoryName",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		LAST);
	

	web_reg_save_param_json(
		"ParamName=Products",
		"QueryString=$.products[*].productId",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		LAST);
	

	

	

	web_reg_find("Text=categoryId\":{rndCategory}",
		LAST);

	
	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{rndCategory}/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	
	
	totalProducts = atoi(lr_eval_string("{Products_count}"));

	randomIndex = rand() % totalProducts + 1;
	
	sprintf(randomProductId, "{Products_%d}", randomIndex);
	lr_save_string(lr_eval_string(randomProductId), "RandomProductId");
	
	

	web_reg_find("Text=categoriesAttributes\":[{",
		LAST);

	web_url("attributes", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_find("Text=categoryData",
		LAST);

	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	
	

	
	
	

	web_reg_save_param_regexp(
		"ParamName=stock",
		"RegExp=inStock\":(.+?)",
		SEARCH_FILTERS,
		LAST);
	
	

	
	web_url("20", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/{RandomProductId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	
	
	stock = atoi(lr_eval_string("{stock}"));
	
	
	while(stock==0){
		
	randomIndex = rand() % totalProducts + 1;
	sprintf(randomProductId, "{Products_%d}", randomIndex);
	lr_save_string(lr_eval_string(randomProductId), "RandomProductId");
	}
	
	web_reg_find("Text=productId\":{RandomProductId}",
		LAST);
	
	
	web_reg_save_param_regexp(
		"ParamName=Color",
		"RegExp=code\":\"(.+?)\"",
		"Ordinal=all",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	
	web_url("20", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/{RandomProductId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	
	lr_save_string(lr_paramarr_random("Color"), "colorRnd");
	

	
	web_reg_find("Text=categoryId\":{rndCategory}",
		LAST);

	web_url("products_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{rndCategory}/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_find("Text=image section",
		LAST);

	web_url("product-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("chooseProduct", LR_AUTO);
	
	lr_think_time(5);

	
	lr_start_transaction("addToCart");



	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");
	
	web_add_header("Authorization", 
		"Basic {authorization}");
	

	web_reg_save_param_regexp(
		"ParamName=HasWar",
		"RegExp=hasWarranty\":(.+?)}",
		SEARCH_FILTERS,
		LAST);

	web_reg_find("Text=productId\":{RandomProductId}",
		LAST);
	
	

	
	web_submit_data("414141", 
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}/product/{RandomProductId}/color/{colorRnd}?quantity={rndQuan}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value={SessionId}", ENDITEM, 
		LAST);

	lr_end_transaction("addToCart",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("cheakout");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_find("Text=loginName>{userName}<",
		LAST);

	web_custom_request("GetAccountByIdRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic {authorization}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_reg_find("Text=loginName>{userName}<",
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");
	
	web_reg_save_param_regexp(
		"ParamName=country",
		"RegExp=countryName>(.+?)<",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=countryIso",
		"RegExp=ountryIsoName>(.+?)<",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic {authorization}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");
	
	web_add_header("Authorization", 
		"Basic {authorization}");
	
	
	web_reg_save_param_regexp(
		"ParamName=price",
		"RegExp=\"price\":(.+?)\,\"qua",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	web_reg_find("Text=userId\":{UserID}",LAST);

	web_url("559529690_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	


	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");
	
	web_reg_save_param_regexp(
		"ParamName=timeStamp",
		"RegExp=transactionDate\":\"(.+?)\"",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);
	
	web_reg_find("Text=code\":\"Ok",
		LAST);

	web_custom_request("shippingcost", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"{street}\",\"addressLine2\":\"\",\"city\":\"{city}\",\"country\":\"{countryIso}\",\"postalCode\":\"{zipcode}\",\"{state}\":\"state\"},\"secustomerName\":\"{name} {lastName}\",\"secustomerPhone\":\"{phone}\",\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{SessionId}\"}", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	
	lr_end_transaction("cheakout",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("GetAccountPaymentPreferencesRequest");
	
	web_reg_save_param_regexp(
		"ParamName=SafePay",
		"RegExp=safePayPassword>(.+?)<",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_find("Text=cardNumber>4886{cardNumber}",
		LAST);
	
	


	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic {authorization}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_reg_find("Text=<div id=\"orderPayment\"",
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	
	web_reg_find("Text=name>Bahamas",
		LAST);

	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	lr_end_transaction("GetAccountPaymentPreferencesRequest", LR_AUTO);

	lr_think_time(5);
	

	lr_start_transaction("payment");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceUpdateSafePayMethodRequest");
	
	web_reg_find("Text=SafePay data updated successfully",
		LAST);

	web_custom_request("UpdateSafePayMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/UpdateSafePayMethodRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>{UserID}</userId><safePayUsername>{payName}</safePayUsername><safePayPassword>{payPass}</safePayPassword><referenceId>1234567890</referenceId><base64Token>Basic {authorization}"
		"</base64Token></UpdateSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");
	
	web_add_header("Authorization", 
		"Basic {authorization}");
	
	web_reg_find("Text=success\":true",
		LAST);

	web_custom_request("Oplata", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/{UserID}", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"{payCode}\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"{phone}\",\"Transaction_MasterCredit_CVVNumber\":\"{cvc}\",\"Transaction_MasterCredit_CardNumber\":\"4886{cardNumber}\",\"Transaction_MasterCredit_CustomerName\":\"{name} {lastName}\",\"Transaction_MasterCredit_ExpirationDate\":\"{expDate}{expYear}\",\"Transaction_PaymentMethod\":\"{payMethod}\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"{SafePay}\",\""
		"Transaction_SafePay_UserName\":\"{payName}\",\"Transaction_TransactionDate\":\"{timeStamp}\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"{street}\",\"Shipping_Address_City\":\"{city}\",\"Shipping_Address_CountryCode\":236,\"Shipping_Address_CustomerName\":\"{name} {lastName}\",\"Shipping_Address_CustomerPhone\":\"{phone}\",\"Shipping_Address_PostalCode\":\"{zipcode}\",\"Shipping_Address_State\":\"{state}\",\"Shipping_Cost\":{price},\"Shipping_NumberOfProducts\":{rndQuan}"
		",\"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"{colorRnd}\",\"productId\":{RandomProductId},\"quantity\":{rndQuan},\"hasWarranty\":{HasWar}}]}", 
		LAST);
	
	web_add_header("Authorization", 
		"Basic {authorization}");
	
	web_reg_find("Text=\"productsInCart\":[]",
		LAST);
	
	

	web_custom_request("559529690_5", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"Method=DELETE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("payment",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("LogOut");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710248648.1.1.1710248778.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_find("Text=success>true</ns2:success",
		LAST);

	web_custom_request("AccountLogoutRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{UserID}</loginUser><base64Token>Basic {authorization}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("LogOut",LR_AUTO);
	
	lr_end_transaction("UC_2_buyItem", LR_AUTO);


	return 0;
}