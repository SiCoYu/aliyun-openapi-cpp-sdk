/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/live/model/UpdateLiveStreamWatermarkRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveStreamWatermarkRequest;

UpdateLiveStreamWatermarkRequest::UpdateLiveStreamWatermarkRequest() :
	RpcServiceRequest("live", "2016-11-01", "UpdateLiveStreamWatermark")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateLiveStreamWatermarkRequest::~UpdateLiveStreamWatermarkRequest()
{}

float UpdateLiveStreamWatermarkRequest::getYOffset()const
{
	return yOffset_;
}

void UpdateLiveStreamWatermarkRequest::setYOffset(float yOffset)
{
	yOffset_ = yOffset;
	setParameter("YOffset", std::to_string(yOffset));
}

std::string UpdateLiveStreamWatermarkRequest::getPictureUrl()const
{
	return pictureUrl_;
}

void UpdateLiveStreamWatermarkRequest::setPictureUrl(const std::string& pictureUrl)
{
	pictureUrl_ = pictureUrl;
	setParameter("PictureUrl", pictureUrl);
}

std::string UpdateLiveStreamWatermarkRequest::getDescription()const
{
	return description_;
}

void UpdateLiveStreamWatermarkRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int UpdateLiveStreamWatermarkRequest::getHeight()const
{
	return height_;
}

void UpdateLiveStreamWatermarkRequest::setHeight(int height)
{
	height_ = height;
	setParameter("Height", std::to_string(height));
}

float UpdateLiveStreamWatermarkRequest::getXOffset()const
{
	return xOffset_;
}

void UpdateLiveStreamWatermarkRequest::setXOffset(float xOffset)
{
	xOffset_ = xOffset;
	setParameter("XOffset", std::to_string(xOffset));
}

long UpdateLiveStreamWatermarkRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateLiveStreamWatermarkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateLiveStreamWatermarkRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateLiveStreamWatermarkRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

int UpdateLiveStreamWatermarkRequest::getRefWidth()const
{
	return refWidth_;
}

void UpdateLiveStreamWatermarkRequest::setRefWidth(int refWidth)
{
	refWidth_ = refWidth;
	setParameter("RefWidth", std::to_string(refWidth));
}

int UpdateLiveStreamWatermarkRequest::getTransparency()const
{
	return transparency_;
}

void UpdateLiveStreamWatermarkRequest::setTransparency(int transparency)
{
	transparency_ = transparency;
	setParameter("Transparency", std::to_string(transparency));
}

std::string UpdateLiveStreamWatermarkRequest::getName()const
{
	return name_;
}

void UpdateLiveStreamWatermarkRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateLiveStreamWatermarkRequest::getOffsetCorner()const
{
	return offsetCorner_;
}

void UpdateLiveStreamWatermarkRequest::setOffsetCorner(const std::string& offsetCorner)
{
	offsetCorner_ = offsetCorner;
	setParameter("OffsetCorner", offsetCorner);
}

int UpdateLiveStreamWatermarkRequest::getRefHeight()const
{
	return refHeight_;
}

void UpdateLiveStreamWatermarkRequest::setRefHeight(int refHeight)
{
	refHeight_ = refHeight;
	setParameter("RefHeight", std::to_string(refHeight));
}

