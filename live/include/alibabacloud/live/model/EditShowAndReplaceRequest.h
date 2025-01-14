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

#ifndef ALIBABACLOUD_LIVE_MODEL_EDITSHOWANDREPLACEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_EDITSHOWANDREPLACEREQUEST_H_

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
			class ALIBABACLOUD_LIVE_EXPORT EditShowAndReplaceRequest : public RpcServiceRequest
			{

			public:
				EditShowAndReplaceRequest();
				~EditShowAndReplaceRequest();

				float getStartTime()const;
				void setStartTime(float startTime);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getStorageInfo()const;
				void setStorageInfo(const std::string& storageInfo);
				std::string getCasterId()const;
				void setCasterId(const std::string& casterId);
				float getEndTime()const;
				void setEndTime(float endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getShowId()const;
				void setShowId(const std::string& showId);

            private:
				float startTime_;
				std::string userData_;
				std::string storageInfo_;
				std::string casterId_;
				float endTime_;
				long ownerId_;
				std::string showId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_EDITSHOWANDREPLACEREQUEST_H_