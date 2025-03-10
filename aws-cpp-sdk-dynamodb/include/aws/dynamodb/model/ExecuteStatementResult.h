﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API ExecuteStatementResult
  {
  public:
    ExecuteStatementResult();
    ExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetItems() const{ return m_items; }

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_items = value; }

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline void SetItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_items = std::move(value); }

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline ExecuteStatementResult& WithItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { SetItems(value); return *this;}

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline ExecuteStatementResult& WithItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline ExecuteStatementResult& AddItems(const Aws::Map<Aws::String, AttributeValue>& value) { m_items.push_back(value); return *this; }

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline ExecuteStatementResult& AddItems(Aws::Map<Aws::String, AttributeValue>&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline ExecuteStatementResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline ExecuteStatementResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline ExecuteStatementResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
