/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-05-05 19:36:36
 * @LastEditTime: 2020-05-10 22:56:19
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <http_response.h>
#include <http_log.h>
#include <http_error.h>


int http_response_init(http_response_t *rsp)
{
    HTTP_ROBUSTNESS_CHECK(rsp , HTTP_NULL_VALUE_ERROR);

    rsp->message = http_message_buffer_init(HTTP_MESSAGE_BUFFER_GROWTH);

    RETURN_ERROR(HTTP_SUCCESS_ERROR);
}


uint16_t http_response_get_length(http_response_t *rsp)
{
    HTTP_ROBUSTNESS_CHECK(rsp , 0);
    return rsp->length;
}

void http_response_set_length(http_response_t *rsp, uint16_t length)
{
    HTTP_ROBUSTNESS_CHECK(rsp, HTTP_VOID);
    rsp->length = length;
}

uint16_t http_response_get_offset(http_response_t *rsp)
{
    HTTP_ROBUSTNESS_CHECK(rsp , 0);
    return rsp->offset;
}

void http_response_set_offset(http_response_t *rsp, uint16_t offset)
{
    HTTP_ROBUSTNESS_CHECK(rsp, HTTP_VOID);
    rsp->offset = offset;
}


http_response_status_t http_response_get_status(http_response_t *rsp)
{
    HTTP_ROBUSTNESS_CHECK(rsp , HTTP_NULL_VALUE_ERROR);
    return rsp->status;
}

void http_response_set_status(http_response_t *rsp, unsigned int status)
{
    HTTP_ROBUSTNESS_CHECK((rsp && status), HTTP_VOID);
    rsp->status = (http_response_status_t)status;
}




