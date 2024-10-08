#include "Typedef.hpp"
#include "Utils.hpp"
#include <fstream>
#include <sstream>

map_err_pages generateErrorPages() {
  map_err_pages map;
  map[100] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>100 Continue</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>100</h1><h2>Continue</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[101] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>101 Switching Protocols</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>101</h1><h2>Switching Protocols</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[102] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>102 Processing</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>102</h1><h2>Processing</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[103] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>103 Early Hints</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>103</h1><h2>Early Hints</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[200] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>200 OK</title><style>body {background-color: "
      "#f8f8f8;color: #333;font-family: 'Arial', sans-serif;text-align: "
      "center;padding: 50px;}.container {max-width: 600px;margin: 0 auto;}h1 "
      "{font-size: 120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p "
      "{font-size: 18px;}a {color: #007BFF;text-decoration: none;}a:hover "
      "{text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>200</h1><h2>OK</h2><p>Sorry, but you do not "
      "have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[201] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>201 Created</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>201</h1><h2>Created</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[202] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>202 Accepted</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>202</h1><h2>Accepted</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[203] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>203 Non-Authoritative "
      "Information</title><style>body {background-color: #f8f8f8;color: "
      "#333;font-family: 'Arial', sans-serif;text-align: center;padding: "
      "50px;}.container {max-width: 600px;margin: 0 auto;}h1 {font-size: "
      "120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p {font-size: 18px;}a "
      "{color: #007BFF;text-decoration: none;}a:hover {text-decoration: "
      "underline;}</style></head><body><div "
      "class=\"container\"><h1>203</h1><h2>Non-Authoritative "
      "Information</h2><p>Sorry, but you do not have permission to access this "
      "page.</p><p><a href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[204] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>204 No Content</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>204</h1><h2>No Content</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[205] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>205 Reset Content</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>205</h1><h2>Reset Content</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[206] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>206 Partial Content</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>206</h1><h2>Partial Content</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[207] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>207 Multi-Status</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>207</h1><h2>Multi-Status</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[208] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>208 Already Reported</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>208</h1><h2>Already Reported</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[226] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>226 IM Used</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>226</h1><h2>IM Used</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[300] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>300 Multiple Choices</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>300</h1><h2>Multiple Choices</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[301] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>301 Moved Permanently</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>301</h1><h2>Moved Permanently</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[302] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>302 Found</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>302</h1><h2>Found</h2><p>Sorry, but you do not "
      "have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[303] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>303 See Other</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>303</h1><h2>See Other</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[304] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>304 Not Modified</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>304</h1><h2>Not Modified</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[305] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>305 Use Proxy</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>305</h1><h2>Use Proxy</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[306] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>306 Switch Proxy</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>306</h1><h2>Switch Proxy</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[307] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>307 Temporary Redirect</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>307</h1><h2>Temporary Redirect</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[308] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>308 Permanent Redirect</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>308</h1><h2>Permanent Redirect</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[400] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>400 Bad Request</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>400</h1><h2>Bad Request</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[401] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>401 Unauthorized</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>401</h1><h2>Unauthorized</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[402] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>402 Payment Required</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>402</h1><h2>Payment Required</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[403] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>403 Forbidden</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>403</h1><h2>Forbidden</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[404] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>404 Not Found</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>404</h1><h2>Not Found</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[405] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>405 Method Not Allowed</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>405</h1><h2>Method Not Allowed</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[406] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>406 Not Acceptable</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>406</h1><h2>Not Acceptable</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[407] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>407 Proxy Authentication "
      "Required</title><style>body {background-color: #f8f8f8;color: "
      "#333;font-family: 'Arial', sans-serif;text-align: center;padding: "
      "50px;}.container {max-width: 600px;margin: 0 auto;}h1 {font-size: "
      "120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p {font-size: 18px;}a "
      "{color: #007BFF;text-decoration: none;}a:hover {text-decoration: "
      "underline;}</style></head><body><div "
      "class=\"container\"><h1>407</h1><h2>Proxy Authentication "
      "Required</h2><p>Sorry, but you do not have permission to access this "
      "page.</p><p><a href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[408] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>408 Request Timeout</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>408</h1><h2>Request Timeout</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[409] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>409 Conflict</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>409</h1><h2>Conflict</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[410] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>410 Gone</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>410</h1><h2>Gone</h2><p>Sorry, but you do not "
      "have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[411] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>411 Length Required</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>411</h1><h2>Length Required</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[412] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>412 Precondition Failed</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>412</h1><h2>Precondition Failed</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[413] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>413 Payload Too Large</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>413</h1><h2>Payload Too Large</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[414] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>414 URI Too Long</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>414</h1><h2>URI Too Long</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[415] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>415 Unsupported Media "
      "Type</title><style>body {background-color: #f8f8f8;color: "
      "#333;font-family: 'Arial', sans-serif;text-align: center;padding: "
      "50px;}.container {max-width: 600px;margin: 0 auto;}h1 {font-size: "
      "120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p {font-size: 18px;}a "
      "{color: #007BFF;text-decoration: none;}a:hover {text-decoration: "
      "underline;}</style></head><body><div "
      "class=\"container\"><h1>415</h1><h2>Unsupported Media "
      "Type</h2><p>Sorry, but you do not have permission to access this "
      "page.</p><p><a href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[416] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>416 Range Not Satisfiable</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>416</h1><h2>Range Not Satisfiable</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[417] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>417 Expectation Failed</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>417</h1><h2>Expectation Failed</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[418] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>418 I'm a teapot</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>418</h1><h2>I'm a teapot</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[421] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>421 Misdirected Request</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>421</h1><h2>Misdirected Request</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[422] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>422 Unprocessable Entity</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>422</h1><h2>Unprocessable Entity</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[423] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>423 Locked</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>423</h1><h2>Locked</h2><p>Sorry, but you do not "
      "have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[424] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>424 Failed Dependency</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>424</h1><h2>Failed Dependency</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[425] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>425 Too Early</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>425</h1><h2>Too Early</h2><p>Sorry, but you do "
      "not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[426] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>426 Upgrade Required</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>426</h1><h2>Upgrade Required</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[428] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>428 Precondition Required</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>428</h1><h2>Precondition Required</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[429] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>429 Too Many Requests</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>429</h1><h2>Too Many Requests</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[431] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>431 Request Header Fields Too "
      "Large</title><style>body {background-color: #f8f8f8;color: "
      "#333;font-family: 'Arial', sans-serif;text-align: center;padding: "
      "50px;}.container {max-width: 600px;margin: 0 auto;}h1 {font-size: "
      "120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p {font-size: 18px;}a "
      "{color: #007BFF;text-decoration: none;}a:hover {text-decoration: "
      "underline;}</style></head><body><div "
      "class=\"container\"><h1>431</h1><h2>Request Header Fields Too "
      "Large</h2><p>Sorry, but you do not have permission to access this "
      "page.</p><p><a href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[451] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>451 Unavailable For Legal "
      "Reasons</title><style>body {background-color: #f8f8f8;color: "
      "#333;font-family: 'Arial', sans-serif;text-align: center;padding: "
      "50px;}.container {max-width: 600px;margin: 0 auto;}h1 {font-size: "
      "120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p {font-size: 18px;}a "
      "{color: #007BFF;text-decoration: none;}a:hover {text-decoration: "
      "underline;}</style></head><body><div "
      "class=\"container\"><h1>451</h1><h2>Unavailable For Legal "
      "Reasons</h2><p>Sorry, but you do not have permission to access this "
      "page.</p><p><a href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[500] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>500 Internal Server Error</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>500</h1><h2>Internal Server Error</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[501] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>501 Not Implemented</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>501</h1><h2>Not Implemented</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[502] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>502 Bad Gateway</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>502</h1><h2>Bad Gateway</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[503] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>503 Service Unavailable</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>503</h1><h2>Service Unavailable</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[504] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>504 Gateway Timeout</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>504</h1><h2>Gateway Timeout</h2><p>Sorry, but "
      "you do not have permission to access this page.</p><p><a href=\"/\">Go "
      "to Homepage</a></p></div></body></html>";
  map[505] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>505 HTTP Version Not "
      "Supported</title><style>body {background-color: #f8f8f8;color: "
      "#333;font-family: 'Arial', sans-serif;text-align: center;padding: "
      "50px;}.container {max-width: 600px;margin: 0 auto;}h1 {font-size: "
      "120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p {font-size: 18px;}a "
      "{color: #007BFF;text-decoration: none;}a:hover {text-decoration: "
      "underline;}</style></head><body><div "
      "class=\"container\"><h1>505</h1><h2>HTTP Version Not "
      "Supported</h2><p>Sorry, but you do not have permission to access this "
      "page.</p><p><a href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[506] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>506 Variant Also "
      "Negotiates</title><style>body {background-color: #f8f8f8;color: "
      "#333;font-family: 'Arial', sans-serif;text-align: center;padding: "
      "50px;}.container {max-width: 600px;margin: 0 auto;}h1 {font-size: "
      "120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p {font-size: 18px;}a "
      "{color: #007BFF;text-decoration: none;}a:hover {text-decoration: "
      "underline;}</style></head><body><div "
      "class=\"container\"><h1>506</h1><h2>Variant Also "
      "Negotiates</h2><p>Sorry, but you do not have permission to access this "
      "page.</p><p><a href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[507] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>507 Insufficient Storage</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>507</h1><h2>Insufficient Storage</h2><p>Sorry, "
      "but you do not have permission to access this page.</p><p><a "
      "href=\"/\">Go to Homepage</a></p></div></body></html>";
  map[508] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>508 Loop Detected</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>508</h1><h2>Loop Detected</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[510] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>510 Not Extended</title><style>body "
      "{background-color: #f8f8f8;color: #333;font-family: 'Arial', "
      "sans-serif;text-align: center;padding: 50px;}.container {max-width: "
      "600px;margin: 0 auto;}h1 {font-size: 120px;margin: 0;}h2 {font-size: "
      "40px;margin: 0;}p {font-size: 18px;}a {color: #007BFF;text-decoration: "
      "none;}a:hover {text-decoration: underline;}</style></head><body><div "
      "class=\"container\"><h1>510</h1><h2>Not Extended</h2><p>Sorry, but you "
      "do not have permission to access this page.</p><p><a href=\"/\">Go to "
      "Homepage</a></p></div></body></html>";
  map[511] =
      "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta "
      "name=\"viewport\" content=\"width=device-width, "
      "initial-scale=1.0\"><title>511 Network Authentication "
      "Required</title><style>body {background-color: #f8f8f8;color: "
      "#333;font-family: 'Arial', sans-serif;text-align: center;padding: "
      "50px;}.container {max-width: 600px;margin: 0 auto;}h1 {font-size: "
      "120px;margin: 0;}h2 {font-size: 40px;margin: 0;}p {font-size: 18px;}a "
      "{color: #007BFF;text-decoration: none;}a:hover {text-decoration: "
      "underline;}</style></head><body><div "
      "class=\"container\"><h1>511</h1><h2>Network Authentication "
      "Required</h2><p>Sorry, but you do not have permission to access this "
      "page.</p><p><a href=\"/\">Go to Homepage</a></p></div></body></html>";
  return (map);
}

map_err_pages &singleton_err_pages() {
  static map_err_pages map = generateErrorPages();
  return (map);
}

std::string getErrorPageFromSingleton(int error_code) {
  return (singleton_err_pages()[error_code]);
}

#include "ServerConf.hpp"
using std::string;

std::vector<char> findErrorPage(int error_code, ServerConf &map) {
  string s = "";
  try {
    map_err_pages m = map.getErrPages();
    if(m.find(error_code) == m.end())
        throw bad_key_error("");
    Location loc = map.getPreciseLocation(
        m[error_code].substr(map.getRoot().size(), m[error_code].size()));
    if (loc.isExactMatch() != 1)
      throw std::logic_error("");
    for (size_t i = 0; i < loc.getIndexFile().size(); i++) {
      string str = "." + loc.getIndexFile()[i];
      std::cout << "ERROR PAGE FILE[" << i << "] ="<< str << std::endl;
      std::ifstream strm;
      struct stat st;
      if (stat(str.c_str(), &st) == -1){
        std::cout << "stat = -1" << std::endl;

        throw (std::logic_error(""));
            }
    std::cout << GREEN << "singleton: first try opened" << RESET << std::endl;
      std::vector<char> buf(st.st_size);
      strm.open(str.c_str());
      if (strm.is_open()) {
        strm.read(&buf[0], st.st_size);
        return (buf);
      }
    }
    throw std::logic_error("");
  }
  catch (const bad_key_error &e)
  {
    std::string file = getErrorPageFromSingleton(500);
    std::cout << GREEN << "singleton: bad error code" << RESET << std::endl;
    std::vector<char> ret;
    ret.insert(ret.begin(), file.begin(), file.end());
    return (ret);
  } catch (const std::logic_error &e) {
    ;
  }
  
  std::ifstream strm;
  string file;
  std::vector<char> tmp;
  s = "." + map.getErrPages().find(error_code)->second;
  strm.open(s.c_str());
  struct stat st;
  if ((stat(s.c_str(), &st) == 0)){
    std::vector<char> buf(st.st_size);
    std::cout << GREEN << "singleton: second try opened: st_size = " << st.st_size << RESET << std::endl;
    if (strm.is_open()) {
        strm.read(&buf[0], st.st_size);
        std::cout << PURP2 << "buf(" << strm.gcount() << "): " << buf << RESET << std::endl;
        return (buf);
    }
  } else {
    file = getErrorPageFromSingleton(error_code);
    std::cout << GREEN << "singleton: third try opened" << RESET << std::endl;
    std::vector<char> ret;
    ret.insert(ret.begin(), file.begin(), file.end());
    return (ret);
  }
  return (tmp);
}
