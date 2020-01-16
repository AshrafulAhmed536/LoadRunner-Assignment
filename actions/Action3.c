Action3()
{

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.php_7", 
		"URL=https://demo.opencart.com/index.php?route=checkout/checkout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demo.opencart.com/index.php?route=product/category&path=57&limit=50", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_link("Your Store", 
		"Text=Your Store", 
		"Snapshot=t13.inf", 
		LAST);

	return 0;
}