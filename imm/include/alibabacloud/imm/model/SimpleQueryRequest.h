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

#ifndef ALIBABACLOUD_IMM_MODEL_SIMPLEQUERYREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_SIMPLEQUERYREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT SimpleQueryRequest : public RpcServiceRequest {
public:
	struct Query {
		std::string field;
		ObjectOfAny objectOfAny;
		std::vector<ObjectOfAny> subQueries;
		std::string value;
		std::string operation;
	};
	struct Aggregations {
		std::string field;
		std::string operation;
	};
	SimpleQueryRequest();
	~SimpleQueryRequest();
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::vector<std::string> getWithFields() const;
	void setWithFields(const std::vector<std::string> &withFields);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	Query getQuery() const;
	void setQuery(const Query &query);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getSort() const;
	void setSort(const std::string &sort);
	std::vector<Aggregations> getAggregations() const;
	void setAggregations(const std::vector<Aggregations> &aggregations);
	std::string getOrder() const;
	void setOrder(const std::string &order);

private:
	std::string projectName_;
	std::vector<std::string> withFields_;
	std::string nextToken_;
	Query query_;
	int maxResults_;
	std::string datasetName_;
	std::string sort_;
	std::vector<Aggregations> aggregations_;
	std::string order_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_SIMPLEQUERYREQUEST_H_
