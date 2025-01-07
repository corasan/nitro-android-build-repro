import { NitroModules } from 'react-native-nitro-modules'
import type { Math as MathSpec } from './specs/Math.nitro'

export const RnMath = NitroModules.createHybridObject<MathSpec>('Math')
