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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMWATERMARKREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT UpdateLiveStreamWatermarkRequest : public RpcServiceRequest
			{

			public:
				UpdateLiveStreamWatermarkRequest();
				~UpdateLiveStreamWatermarkRequest();

				float getYOffset()const;
				void setYOffset(float yOffset);
				std::string getPictureUrl()const;
				void setPictureUrl(const std::string& pictureUrl);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getHeight()const;
				void setHeight(int height);
				float getXOffset()const;
				void setXOffset(float xOffset);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				int getRefWidth()const;
				void setRefWidth(int refWidth);
				int getTransparency()const;
				void setTransparency(int transparency);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getOffsetCorner()const;
				void setOffsetCorner(const std::string& offsetCorner);
				int getRefHeight()const;
				void setRefHeight(int refHeight);

            private:
				float yOffset_;
				std::string pictureUrl_;
				std::string description_;
				int height_;
				float xOffset_;
				long ownerId_;
				std::string templateId_;
				int refWidth_;
				int transparency_;
				std::string name_;
				std::string offsetCorner_;
				int refHeight_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMWATERMARKREQUEST_H_