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

#ifndef ALIBABACLOUD_CDRS_MODEL_GETCDRSMONITORRESULTREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_GETCDRSMONITORRESULTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT GetCdrsMonitorResultRequest : public RpcServiceRequest
			{

			public:
				GetCdrsMonitorResultRequest();
				~GetCdrsMonitorResultRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getAlgorithmVendor()const;
				void setAlgorithmVendor(const std::string& algorithmVendor);
				std::string getMinRecordId()const;
				void setMinRecordId(const std::string& minRecordId);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);

            private:
				std::string corpId_;
				long endTime_;
				long startTime_;
				std::string bizId_;
				std::string algorithmVendor_;
				std::string minRecordId_;
				std::string taskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_GETCDRSMONITORRESULTREQUEST_H_