/* Firmware entry: 0x481624ce */

undefined4 FUN_ram_481624ce(uint *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1;
  uVar2 = __bswapsi2(uVar1);
  if ((uVar1 & 0xff) >> 4 == 0) {
    *param_2 = (ushort)(uVar2 >> 0x13) & 0x10 | (ushort)uVar1 & 0xf | (ushort)(uVar2 >> 0xb) & 0x1e0
               | *param_2 & 0xfe00;
    return 0;
  }
  return 0x106;
}


