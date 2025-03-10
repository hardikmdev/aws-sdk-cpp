﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeLifecycle.h>
#include <aws/fsx/model/DeleteVolumeOntapResponse.h>
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
namespace FSx
{
namespace Model
{
  class AWS_FSX_API DeleteVolumeResult
  {
  public:
    DeleteVolumeResult();
    DeleteVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the volume being deleted.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume being deleted.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }

    /**
     * <p>The ID of the volume being deleted.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume being deleted.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume being deleted.</p>
     */
    inline DeleteVolumeResult& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume being deleted.</p>
     */
    inline DeleteVolumeResult& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume being deleted.</p>
     */
    inline DeleteVolumeResult& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>Describes the lifecycle state of the volume being deleted.</p>
     */
    inline const VolumeLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Describes the lifecycle state of the volume being deleted.</p>
     */
    inline void SetLifecycle(const VolumeLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>Describes the lifecycle state of the volume being deleted.</p>
     */
    inline void SetLifecycle(VolumeLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>Describes the lifecycle state of the volume being deleted.</p>
     */
    inline DeleteVolumeResult& WithLifecycle(const VolumeLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Describes the lifecycle state of the volume being deleted.</p>
     */
    inline DeleteVolumeResult& WithLifecycle(VolumeLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>Returned after a <code>DeleteVolume request, showing the status of the delete
     * request.</code> </p>
     */
    inline const DeleteVolumeOntapResponse& GetOntapResponse() const{ return m_ontapResponse; }

    /**
     * <p>Returned after a <code>DeleteVolume request, showing the status of the delete
     * request.</code> </p>
     */
    inline void SetOntapResponse(const DeleteVolumeOntapResponse& value) { m_ontapResponse = value; }

    /**
     * <p>Returned after a <code>DeleteVolume request, showing the status of the delete
     * request.</code> </p>
     */
    inline void SetOntapResponse(DeleteVolumeOntapResponse&& value) { m_ontapResponse = std::move(value); }

    /**
     * <p>Returned after a <code>DeleteVolume request, showing the status of the delete
     * request.</code> </p>
     */
    inline DeleteVolumeResult& WithOntapResponse(const DeleteVolumeOntapResponse& value) { SetOntapResponse(value); return *this;}

    /**
     * <p>Returned after a <code>DeleteVolume request, showing the status of the delete
     * request.</code> </p>
     */
    inline DeleteVolumeResult& WithOntapResponse(DeleteVolumeOntapResponse&& value) { SetOntapResponse(std::move(value)); return *this;}

  private:

    Aws::String m_volumeId;

    VolumeLifecycle m_lifecycle;

    DeleteVolumeOntapResponse m_ontapResponse;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
