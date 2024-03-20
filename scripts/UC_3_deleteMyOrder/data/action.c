Action()
{

	lr_start_transaction("index");

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1710247138488\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("WwWwW", 
		lr_unmask("65f05364684e9412a4dd2311"), 
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
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1250", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
		"Url=/css/images/SafePay.png", ENDITEM, 
		"Url=/css/images/Bell.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Master_credit.png", ENDITEM, 
		"Url=/css/images/Check.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

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

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710248648.1.0.1710248648.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.1.874330377.1710248648; DOMAIN=www.advantageonlineshopping.com");

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
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

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("index",LR_AUTO);

	lr_start_transaction("LogIn");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>WwW20331</loginPassword><loginUser>WwWwW</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_url("559529690", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/559529690", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_custom_request("559529690_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/559529690", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"Body=[{\"hexColor\":\"C3C3C3\",\"productId\":10,\"quantity\":1}]", 
		LAST);

	lr_end_transaction("LogIn",LR_AUTO);

	lr_start_transaction("Shoping");

	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
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

	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("20", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/20", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
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

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_submit_data("414141", 
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/559529690/product/20/color/414141?quantity=1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=F551DA335719ABC01261169E3D9DDAE2", ENDITEM, 
		LAST);

	lr_end_transaction("Shoping",LR_AUTO);

	lr_start_transaction("cheakout");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>559529690</accountId><base64Token>Basic V3dXd1c6V3dXMjAzMzE=</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>559529690</accountId><base64Token>Basic V3dXd1c6V3dXMjAzMzE=</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("559529690_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/559529690", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

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
		"Body={\"seaddress\":{\"addressLine1\":\"adress\",\"addressLine2\":\"\",\"city\":\"msk\",\"country\":\"re\",\"postalCode\":\"zipcode\",\"state\":\"state\"},\"secustomerName\":\"name surName\",\"secustomerPhone\":\"89099091651\",\"senumberOfProducts\":2,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"F551DA335719ABC01261169E3D9DDAE2\"}", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>559529690</accountId><base64Token>Basic V3dXd1c6V3dXMjAzMzE=</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
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

	lr_end_transaction("cheakout",LR_AUTO);

	lr_start_transaction("payment");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceUpdateSafePayMethodRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>559529690</userId><safePayUsername>lolkek</safePayUsername><safePayPassword>LOLkek20331</safePayPassword><referenceId>1234567890</referenceId><base64Token>Basic V3dXd1c6V3dXMjAzMzE="
		"</base64Token></UpdateSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_custom_request("559529690_4", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/559529690", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"89099091651\",\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"LOLkek20331\",\""
		"Transaction_SafePay_UserName\":\"lolkek\",\"Transaction_TransactionDate\":\"12032024\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"adress\",\"Shipping_Address_City\":\"msk\",\"Shipping_Address_CountryCode\":236,\"Shipping_Address_CustomerName\":\"name surName\",\"Shipping_Address_CustomerPhone\":\"89099091651\",\"Shipping_Address_PostalCode\":\"zipcode\",\"Shipping_Address_State\":\"state\",\"Shipping_Cost\":1531.98,\"Shipping_NumberOfProducts\":2"
		",\"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"414141\",\"productId\":20,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"C3C3C3\",\"productId\":10,\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);

	web_custom_request("559529690_5", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/559529690", 
		"Method=DELETE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("payment",LR_AUTO);

	lr_start_transaction("LogOut");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710248648.1.1.1710248778.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>559529690</loginUser><base64Token>Basic V3dXd1c6V3dXMjAzMzE=</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("LogOut",LR_AUTO);

	return 0;
}