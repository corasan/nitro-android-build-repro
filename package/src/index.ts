import { NitroModules } from 'react-native-nitro-modules'
import type { Math as MathSpec } from './specs/Math.nitro'

export const Math = NitroModules.createHybridObject<MathSpec>('Math')
