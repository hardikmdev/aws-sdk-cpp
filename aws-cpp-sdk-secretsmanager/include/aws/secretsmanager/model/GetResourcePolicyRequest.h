﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API GetResourcePolicyRequest : public SecretsManagerRequest
  {
  public:
    GetResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourcePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <p>For an ARN, we recommend that you specify a
     * complete ARN rather than a partial ARN.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <p>For an ARN, we recommend that you specify a
     * complete ARN rather than a partial ARN.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <p>For an ARN, we recommend that you specify a
     * complete ARN rather than a partial ARN.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <p>For an ARN, we recommend that you specify a
     * complete ARN rather than a partial ARN.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <p>For an ARN, we recommend that you specify a
     * complete ARN rather than a partial ARN.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <p>For an ARN, we recommend that you specify a
     * complete ARN rather than a partial ARN.</p>
     */
    inline GetResourcePolicyRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <p>For an ARN, we recommend that you specify a
     * complete ARN rather than a partial ARN.</p>
     */
    inline GetResourcePolicyRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <p>For an ARN, we recommend that you specify a
     * complete ARN rather than a partial ARN.</p>
     */
    inline GetResourcePolicyRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
