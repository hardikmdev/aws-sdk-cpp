﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingImage.h>
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
namespace NimbleStudio
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingImageResponse">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API CreateStreamingImageResult
  {
  public:
    CreateStreamingImageResult();
    CreateStreamingImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateStreamingImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The streaming image.</p>
     */
    inline const StreamingImage& GetStreamingImage() const{ return m_streamingImage; }

    /**
     * <p>The streaming image.</p>
     */
    inline void SetStreamingImage(const StreamingImage& value) { m_streamingImage = value; }

    /**
     * <p>The streaming image.</p>
     */
    inline void SetStreamingImage(StreamingImage&& value) { m_streamingImage = std::move(value); }

    /**
     * <p>The streaming image.</p>
     */
    inline CreateStreamingImageResult& WithStreamingImage(const StreamingImage& value) { SetStreamingImage(value); return *this;}

    /**
     * <p>The streaming image.</p>
     */
    inline CreateStreamingImageResult& WithStreamingImage(StreamingImage&& value) { SetStreamingImage(std::move(value)); return *this;}

  private:

    StreamingImage m_streamingImage;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
