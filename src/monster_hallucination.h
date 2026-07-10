#pragma once

class monster;

namespace monster_hallucination
{

inline constexpr auto expiry_one_in = 25;

/// Whether a hallucination cannot reach the action loop and needs lifecycle expiry.
auto needs_lifecycle_expiry( const monster &critter ) -> bool;

} // namespace monster_hallucination
