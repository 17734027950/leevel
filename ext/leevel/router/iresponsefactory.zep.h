
extern zend_class_entry *leevel_router_iresponsefactory_ce;

ZEPHIR_INIT_CLASS(Leevel_Router_IResponseFactory);

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_make, 0, 0, 0)
	ZEND_ARG_INFO(0, content)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_view, 0, 0, 1)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_ARRAY_INFO(0, vars, 1)
	ZEND_ARG_INFO(0, ext)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_viewsuccess, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_INFO(0, time)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_viewfail, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_INFO(0, time)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_json, 0, 0, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
	ZEND_ARG_INFO(0, json)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_jsonp, 0, 0, 1)
	ZEND_ARG_INFO(0, callback)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
	ZEND_ARG_INFO(0, json)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_download, 0, 0, 1)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
	ZEND_ARG_INFO(0, autoEtag)
	ZEND_ARG_INFO(0, autoLastModified)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_file, 0, 0, 1)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
	ZEND_ARG_INFO(0, autoEtag)
	ZEND_ARG_INFO(0, autoLastModified)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_redirect, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_ARRAY_INFO(0, params, 1)
	ZEND_ARG_INFO(0, subdomain)
	ZEND_ARG_INFO(0, suffix)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_redirectraw, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_INFO(0, status)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apiok, 0, 0, 0)
	ZEND_ARG_INFO(0, content)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apicreated, 0, 0, 0)
	ZEND_ARG_INFO(0, location)
	ZEND_ARG_INFO(0, content)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apiaccepted, 0, 0, 0)
	ZEND_ARG_INFO(0, location)
	ZEND_ARG_INFO(0, content)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apierror, 0, 0, 2)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, statusCode)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apibadrequest, 0, 0, 0)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apiunauthorized, 0, 0, 0)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apiforbidden, 0, 0, 0)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apinotfound, 0, 0, 0)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apimethodnotallowed, 0, 0, 0)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apiunprocessableentity, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, errors, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apitoomanyrequests, 0, 0, 0)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_apiinternalservererror, 0, 0, 0)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_setviewsuccesstemplate, 0, 0, 1)
	ZEND_ARG_INFO(0, template)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_leevel_router_iresponsefactory_setviewfailtemplate, 0, 0, 1)
	ZEND_ARG_INFO(0, template)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(leevel_router_iresponsefactory_method_entry) {
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, make, arginfo_leevel_router_iresponsefactory_make)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, view, arginfo_leevel_router_iresponsefactory_view)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, viewSuccess, arginfo_leevel_router_iresponsefactory_viewsuccess)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, viewFail, arginfo_leevel_router_iresponsefactory_viewfail)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, json, arginfo_leevel_router_iresponsefactory_json)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, jsonp, arginfo_leevel_router_iresponsefactory_jsonp)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, download, arginfo_leevel_router_iresponsefactory_download)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, file, arginfo_leevel_router_iresponsefactory_file)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, redirect, arginfo_leevel_router_iresponsefactory_redirect)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, redirectRaw, arginfo_leevel_router_iresponsefactory_redirectraw)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiOk, arginfo_leevel_router_iresponsefactory_apiok)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiCreated, arginfo_leevel_router_iresponsefactory_apicreated)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiAccepted, arginfo_leevel_router_iresponsefactory_apiaccepted)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiNoContent, NULL)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiError, arginfo_leevel_router_iresponsefactory_apierror)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiBadRequest, arginfo_leevel_router_iresponsefactory_apibadrequest)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiUnauthorized, arginfo_leevel_router_iresponsefactory_apiunauthorized)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiForbidden, arginfo_leevel_router_iresponsefactory_apiforbidden)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiNotFound, arginfo_leevel_router_iresponsefactory_apinotfound)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiMethodNotAllowed, arginfo_leevel_router_iresponsefactory_apimethodnotallowed)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiUnprocessableEntity, arginfo_leevel_router_iresponsefactory_apiunprocessableentity)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiTooManyRequests, arginfo_leevel_router_iresponsefactory_apitoomanyrequests)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, apiInternalServerError, arginfo_leevel_router_iresponsefactory_apiinternalservererror)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, setViewSuccessTemplate, arginfo_leevel_router_iresponsefactory_setviewsuccesstemplate)
	PHP_ABSTRACT_ME(Leevel_Router_IResponseFactory, setViewFailTemplate, arginfo_leevel_router_iresponsefactory_setviewfailtemplate)
	PHP_FE_END
};
