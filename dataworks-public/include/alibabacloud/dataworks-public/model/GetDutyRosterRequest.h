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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDUTYROSTERREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDUTYROSTERREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetDutyRosterRequest : public RpcServiceRequest {
public:
	GetDutyRosterRequest();
	~GetDutyRosterRequest();
	std::string getDutyRosterIdentifier() const;
	void setDutyRosterIdentifier(const std::string &dutyRosterIdentifier);
	std::string getWatchkeeper() const;
	void setWatchkeeper(const std::string &watchkeeper);
	std::string getUserType() const;
	void setUserType(const std::string &userType);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);

private:
	std::string dutyRosterIdentifier_;
	std::string watchkeeper_;
	std::string userType_;
	long endTime_;
	long beginTime_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDUTYROSTERREQUEST_H_
