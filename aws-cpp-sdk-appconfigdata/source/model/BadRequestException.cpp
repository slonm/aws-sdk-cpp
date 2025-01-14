﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/BadRequestException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfigData
{
namespace Model
{

BadRequestException::BadRequestException() : 
    m_detailsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(BadRequestReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

BadRequestException::BadRequestException(JsonView jsonValue) : 
    m_detailsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(BadRequestReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

BadRequestException& BadRequestException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetObject("Details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = BadRequestReasonMapper::GetBadRequestReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue BadRequestException::Jsonize() const
{
  JsonValue payload;

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("Details", m_details.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", BadRequestReasonMapper::GetNameForBadRequestReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
