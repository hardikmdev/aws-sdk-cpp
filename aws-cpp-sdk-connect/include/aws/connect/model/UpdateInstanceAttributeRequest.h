﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceAttributeType.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API UpdateInstanceAttributeRequest : public ConnectRequest
  {
  public:
    UpdateInstanceAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceAttribute"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateInstanceAttributeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateInstanceAttributeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateInstanceAttributeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The type of attribute.</p>  <p>Only allowlisted customers can consume
     * USE_CUSTOM_TTS_VOICES. To access this feature, contact AWS Support for
     * allowlisting.</p> 
     */
    inline const InstanceAttributeType& GetAttributeType() const{ return m_attributeType; }

    /**
     * <p>The type of attribute.</p>  <p>Only allowlisted customers can consume
     * USE_CUSTOM_TTS_VOICES. To access this feature, contact AWS Support for
     * allowlisting.</p> 
     */
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

    /**
     * <p>The type of attribute.</p>  <p>Only allowlisted customers can consume
     * USE_CUSTOM_TTS_VOICES. To access this feature, contact AWS Support for
     * allowlisting.</p> 
     */
    inline void SetAttributeType(const InstanceAttributeType& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

    /**
     * <p>The type of attribute.</p>  <p>Only allowlisted customers can consume
     * USE_CUSTOM_TTS_VOICES. To access this feature, contact AWS Support for
     * allowlisting.</p> 
     */
    inline void SetAttributeType(InstanceAttributeType&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

    /**
     * <p>The type of attribute.</p>  <p>Only allowlisted customers can consume
     * USE_CUSTOM_TTS_VOICES. To access this feature, contact AWS Support for
     * allowlisting.</p> 
     */
    inline UpdateInstanceAttributeRequest& WithAttributeType(const InstanceAttributeType& value) { SetAttributeType(value); return *this;}

    /**
     * <p>The type of attribute.</p>  <p>Only allowlisted customers can consume
     * USE_CUSTOM_TTS_VOICES. To access this feature, contact AWS Support for
     * allowlisting.</p> 
     */
    inline UpdateInstanceAttributeRequest& WithAttributeType(InstanceAttributeType&& value) { SetAttributeType(std::move(value)); return *this;}


    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline UpdateInstanceAttributeRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline UpdateInstanceAttributeRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline UpdateInstanceAttributeRequest& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    InstanceAttributeType m_attributeType;
    bool m_attributeTypeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
