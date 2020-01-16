Action2()
{

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("index.php_5", 
		"URL=https://demo.opencart.com/index.php?route=product/category&path=57", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demo.opencart.com/index.php?route=product/category&path=18&sort=p.model&order=ASC&limit=50", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_url("index.php_6", 
		"URL=https://demo.opencart.com/index.php?route=product/category&path=57&limit=50", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demo.opencart.com/index.php?route=product/category&path=57", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
