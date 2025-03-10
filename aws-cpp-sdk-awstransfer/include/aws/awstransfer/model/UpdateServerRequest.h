﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ProtocolDetails.h>
#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/WorkflowDetails.h>
#include <aws/awstransfer/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class AWS_TRANSFER_API UpdateServerRequest : public TransferRequest
  {
  public:
    UpdateServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline UpdateServerRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline UpdateServerRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline UpdateServerRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode (for FTP and FTPS
     * protocols). Enter a single dotted-quad IPv4 address, such as the external IP
     * address of a firewall, router, or load balancer. </p>
     */
    inline const ProtocolDetails& GetProtocolDetails() const{ return m_protocolDetails; }

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode (for FTP and FTPS
     * protocols). Enter a single dotted-quad IPv4 address, such as the external IP
     * address of a firewall, router, or load balancer. </p>
     */
    inline bool ProtocolDetailsHasBeenSet() const { return m_protocolDetailsHasBeenSet; }

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode (for FTP and FTPS
     * protocols). Enter a single dotted-quad IPv4 address, such as the external IP
     * address of a firewall, router, or load balancer. </p>
     */
    inline void SetProtocolDetails(const ProtocolDetails& value) { m_protocolDetailsHasBeenSet = true; m_protocolDetails = value; }

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode (for FTP and FTPS
     * protocols). Enter a single dotted-quad IPv4 address, such as the external IP
     * address of a firewall, router, or load balancer. </p>
     */
    inline void SetProtocolDetails(ProtocolDetails&& value) { m_protocolDetailsHasBeenSet = true; m_protocolDetails = std::move(value); }

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode (for FTP and FTPS
     * protocols). Enter a single dotted-quad IPv4 address, such as the external IP
     * address of a firewall, router, or load balancer. </p>
     */
    inline UpdateServerRequest& WithProtocolDetails(const ProtocolDetails& value) { SetProtocolDetails(value); return *this;}

    /**
     * <p> The protocol settings that are configured for your server. </p> <p> Use the
     * <code>PassiveIp</code> parameter to indicate passive mode (for FTP and FTPS
     * protocols). Enter a single dotted-quad IPv4 address, such as the external IP
     * address of a firewall, router, or load balancer. </p>
     */
    inline UpdateServerRequest& WithProtocolDetails(ProtocolDetails&& value) { SetProtocolDetails(std::move(value)); return *this;}


    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline UpdateServerRequest& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make it
     * accessible only to resources within your VPC, or you can attach Elastic IP
     * addresses and make it accessible to clients over the internet. Your VPC's
     * default security groups are automatically assigned to your endpoint.</p>
     */
    inline UpdateServerRequest& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}


    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline UpdateServerRequest& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline UpdateServerRequest& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -m PEM -f
     * my-new-server-key</code>.</p>  <p>If you aren't planning to migrate
     * existing users from an existing server to a new server, don't update the host
     * key. Accidentally changing a server's host key can be disruptive.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Change
     * the host key for your SFTP-enabled server</a> in the <i>Amazon Web
     * ServicesTransfer Family User Guide</i>.</p>
     */
    inline const Aws::String& GetHostKey() const{ return m_hostKey; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -m PEM -f
     * my-new-server-key</code>.</p>  <p>If you aren't planning to migrate
     * existing users from an existing server to a new server, don't update the host
     * key. Accidentally changing a server's host key can be disruptive.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Change
     * the host key for your SFTP-enabled server</a> in the <i>Amazon Web
     * ServicesTransfer Family User Guide</i>.</p>
     */
    inline bool HostKeyHasBeenSet() const { return m_hostKeyHasBeenSet; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -m PEM -f
     * my-new-server-key</code>.</p>  <p>If you aren't planning to migrate
     * existing users from an existing server to a new server, don't update the host
     * key. Accidentally changing a server's host key can be disruptive.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Change
     * the host key for your SFTP-enabled server</a> in the <i>Amazon Web
     * ServicesTransfer Family User Guide</i>.</p>
     */
    inline void SetHostKey(const Aws::String& value) { m_hostKeyHasBeenSet = true; m_hostKey = value; }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -m PEM -f
     * my-new-server-key</code>.</p>  <p>If you aren't planning to migrate
     * existing users from an existing server to a new server, don't update the host
     * key. Accidentally changing a server's host key can be disruptive.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Change
     * the host key for your SFTP-enabled server</a> in the <i>Amazon Web
     * ServicesTransfer Family User Guide</i>.</p>
     */
    inline void SetHostKey(Aws::String&& value) { m_hostKeyHasBeenSet = true; m_hostKey = std::move(value); }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -m PEM -f
     * my-new-server-key</code>.</p>  <p>If you aren't planning to migrate
     * existing users from an existing server to a new server, don't update the host
     * key. Accidentally changing a server's host key can be disruptive.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Change
     * the host key for your SFTP-enabled server</a> in the <i>Amazon Web
     * ServicesTransfer Family User Guide</i>.</p>
     */
    inline void SetHostKey(const char* value) { m_hostKeyHasBeenSet = true; m_hostKey.assign(value); }

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -m PEM -f
     * my-new-server-key</code>.</p>  <p>If you aren't planning to migrate
     * existing users from an existing server to a new server, don't update the host
     * key. Accidentally changing a server's host key can be disruptive.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Change
     * the host key for your SFTP-enabled server</a> in the <i>Amazon Web
     * ServicesTransfer Family User Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(const Aws::String& value) { SetHostKey(value); return *this;}

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -m PEM -f
     * my-new-server-key</code>.</p>  <p>If you aren't planning to migrate
     * existing users from an existing server to a new server, don't update the host
     * key. Accidentally changing a server's host key can be disruptive.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Change
     * the host key for your SFTP-enabled server</a> in the <i>Amazon Web
     * ServicesTransfer Family User Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(Aws::String&& value) { SetHostKey(std::move(value)); return *this;}

    /**
     * <p>The RSA private key as generated by <code>ssh-keygen -N "" -m PEM -f
     * my-new-server-key</code>.</p>  <p>If you aren't planning to migrate
     * existing users from an existing server to a new server, don't update the host
     * key. Accidentally changing a server's host key can be disruptive.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Change
     * the host key for your SFTP-enabled server</a> in the <i>Amazon Web
     * ServicesTransfer Family User Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(const char* value) { SetHostKey(value); return *this;}


    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline UpdateServerRequest& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline UpdateServerRequest& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>  <p>If you
     * select <code>FTPS</code>, you must choose a certificate stored in Amazon Web
     * ServicesCertificate Manager (ACM) which will be used to identify your server
     * when clients connect to it over FTPS.</p> <p>If <code>Protocol</code> includes
     * either <code>FTP</code> or <code>FTPS</code>, then the <code>EndpointType</code>
     * must be <code>VPC</code> and the <code>IdentityProviderType</code> must be
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_GATEWAY</code>.</p> <p>If
     * <code>Protocol</code> includes <code>FTP</code>, then
     * <code>AddressAllocationIds</code> cannot be associated.</p> <p>If
     * <code>Protocol</code> is set only to <code>SFTP</code>, the
     * <code>EndpointType</code> can be set to <code>PUBLIC</code> and the
     * <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> 
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>  <p>If you
     * select <code>FTPS</code>, you must choose a certificate stored in Amazon Web
     * ServicesCertificate Manager (ACM) which will be used to identify your server
     * when clients connect to it over FTPS.</p> <p>If <code>Protocol</code> includes
     * either <code>FTP</code> or <code>FTPS</code>, then the <code>EndpointType</code>
     * must be <code>VPC</code> and the <code>IdentityProviderType</code> must be
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_GATEWAY</code>.</p> <p>If
     * <code>Protocol</code> includes <code>FTP</code>, then
     * <code>AddressAllocationIds</code> cannot be associated.</p> <p>If
     * <code>Protocol</code> is set only to <code>SFTP</code>, the
     * <code>EndpointType</code> can be set to <code>PUBLIC</code> and the
     * <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> 
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>  <p>If you
     * select <code>FTPS</code>, you must choose a certificate stored in Amazon Web
     * ServicesCertificate Manager (ACM) which will be used to identify your server
     * when clients connect to it over FTPS.</p> <p>If <code>Protocol</code> includes
     * either <code>FTP</code> or <code>FTPS</code>, then the <code>EndpointType</code>
     * must be <code>VPC</code> and the <code>IdentityProviderType</code> must be
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_GATEWAY</code>.</p> <p>If
     * <code>Protocol</code> includes <code>FTP</code>, then
     * <code>AddressAllocationIds</code> cannot be associated.</p> <p>If
     * <code>Protocol</code> is set only to <code>SFTP</code>, the
     * <code>EndpointType</code> can be set to <code>PUBLIC</code> and the
     * <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> 
     */
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>  <p>If you
     * select <code>FTPS</code>, you must choose a certificate stored in Amazon Web
     * ServicesCertificate Manager (ACM) which will be used to identify your server
     * when clients connect to it over FTPS.</p> <p>If <code>Protocol</code> includes
     * either <code>FTP</code> or <code>FTPS</code>, then the <code>EndpointType</code>
     * must be <code>VPC</code> and the <code>IdentityProviderType</code> must be
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_GATEWAY</code>.</p> <p>If
     * <code>Protocol</code> includes <code>FTP</code>, then
     * <code>AddressAllocationIds</code> cannot be associated.</p> <p>If
     * <code>Protocol</code> is set only to <code>SFTP</code>, the
     * <code>EndpointType</code> can be set to <code>PUBLIC</code> and the
     * <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> 
     */
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>  <p>If you
     * select <code>FTPS</code>, you must choose a certificate stored in Amazon Web
     * ServicesCertificate Manager (ACM) which will be used to identify your server
     * when clients connect to it over FTPS.</p> <p>If <code>Protocol</code> includes
     * either <code>FTP</code> or <code>FTPS</code>, then the <code>EndpointType</code>
     * must be <code>VPC</code> and the <code>IdentityProviderType</code> must be
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_GATEWAY</code>.</p> <p>If
     * <code>Protocol</code> includes <code>FTP</code>, then
     * <code>AddressAllocationIds</code> cannot be associated.</p> <p>If
     * <code>Protocol</code> is set only to <code>SFTP</code>, the
     * <code>EndpointType</code> can be set to <code>PUBLIC</code> and the
     * <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> 
     */
    inline UpdateServerRequest& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>  <p>If you
     * select <code>FTPS</code>, you must choose a certificate stored in Amazon Web
     * ServicesCertificate Manager (ACM) which will be used to identify your server
     * when clients connect to it over FTPS.</p> <p>If <code>Protocol</code> includes
     * either <code>FTP</code> or <code>FTPS</code>, then the <code>EndpointType</code>
     * must be <code>VPC</code> and the <code>IdentityProviderType</code> must be
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_GATEWAY</code>.</p> <p>If
     * <code>Protocol</code> includes <code>FTP</code>, then
     * <code>AddressAllocationIds</code> cannot be associated.</p> <p>If
     * <code>Protocol</code> is set only to <code>SFTP</code>, the
     * <code>EndpointType</code> can be set to <code>PUBLIC</code> and the
     * <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> 
     */
    inline UpdateServerRequest& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>  <p>If you
     * select <code>FTPS</code>, you must choose a certificate stored in Amazon Web
     * ServicesCertificate Manager (ACM) which will be used to identify your server
     * when clients connect to it over FTPS.</p> <p>If <code>Protocol</code> includes
     * either <code>FTP</code> or <code>FTPS</code>, then the <code>EndpointType</code>
     * must be <code>VPC</code> and the <code>IdentityProviderType</code> must be
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_GATEWAY</code>.</p> <p>If
     * <code>Protocol</code> includes <code>FTP</code>, then
     * <code>AddressAllocationIds</code> cannot be associated.</p> <p>If
     * <code>Protocol</code> is set only to <code>SFTP</code>, the
     * <code>EndpointType</code> can be set to <code>PUBLIC</code> and the
     * <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> 
     */
    inline UpdateServerRequest& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP): File transfer over SSH</p> </li> <li> <p>File Transfer Protocol Secure
     * (FTPS): File transfer with TLS encryption</p> </li> <li> <p>File Transfer
     * Protocol (FTP): Unencrypted file transfer</p> </li> </ul>  <p>If you
     * select <code>FTPS</code>, you must choose a certificate stored in Amazon Web
     * ServicesCertificate Manager (ACM) which will be used to identify your server
     * when clients connect to it over FTPS.</p> <p>If <code>Protocol</code> includes
     * either <code>FTP</code> or <code>FTPS</code>, then the <code>EndpointType</code>
     * must be <code>VPC</code> and the <code>IdentityProviderType</code> must be
     * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_GATEWAY</code>.</p> <p>If
     * <code>Protocol</code> includes <code>FTP</code>, then
     * <code>AddressAllocationIds</code> cannot be associated.</p> <p>If
     * <code>Protocol</code> is set only to <code>SFTP</code>, the
     * <code>EndpointType</code> can be set to <code>PUBLIC</code> and the
     * <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> 
     */
    inline UpdateServerRequest& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const{ return m_securityPolicyName; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(const Aws::String& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = value; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(Aws::String&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::move(value); }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(const char* value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName.assign(value); }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline UpdateServerRequest& WithSecurityPolicyName(const Aws::String& value) { SetSecurityPolicyName(value); return *this;}

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline UpdateServerRequest& WithSecurityPolicyName(Aws::String&& value) { SetSecurityPolicyName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline UpdateServerRequest& WithSecurityPolicyName(const char* value) { SetSecurityPolicyName(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline const WorkflowDetails& GetWorkflowDetails() const{ return m_workflowDetails; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline bool WorkflowDetailsHasBeenSet() const { return m_workflowDetailsHasBeenSet; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline void SetWorkflowDetails(const WorkflowDetails& value) { m_workflowDetailsHasBeenSet = true; m_workflowDetails = value; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline void SetWorkflowDetails(WorkflowDetails&& value) { m_workflowDetailsHasBeenSet = true; m_workflowDetails = std::move(value); }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline UpdateServerRequest& WithWorkflowDetails(const WorkflowDetails& value) { SetWorkflowDetails(value); return *this;}

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * used for executing the workflow.</p>
     */
    inline UpdateServerRequest& WithWorkflowDetails(WorkflowDetails&& value) { SetWorkflowDetails(std::move(value)); return *this;}

  private:

    Aws::String m_certificate;
    bool m_certificateHasBeenSet;

    ProtocolDetails m_protocolDetails;
    bool m_protocolDetailsHasBeenSet;

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_hostKey;
    bool m_hostKeyHasBeenSet;

    IdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet;

    Aws::String m_securityPolicyName;
    bool m_securityPolicyNameHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    WorkflowDetails m_workflowDetails;
    bool m_workflowDetailsHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
