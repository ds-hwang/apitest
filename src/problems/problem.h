#pragma once

class Solution;

// --------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------
class Problem
{
public:
    Problem() : mActiveSolution() { }
    virtual ~Problem() { }

    virtual bool Init() = 0;
    virtual void Render() = 0;
    virtual void Shutdown();
    virtual std::string GetName() = 0;

    virtual bool SetSolution(Solution* _solution);

protected:
    Solution* mActiveSolution;
};
