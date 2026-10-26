/* Firmware entry: 0x4817e232 */

void FUN_ram_4817e232(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,
                     int param_6,int param_7,int param_8)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1;
  *param_1 = (uint)*(byte *)(param_8 + (uVar1 >> 0x18)) << 0x18 ^
             (uint)*(byte *)((uVar1 & 0xff) + param_5) ^
             (uint)*(byte *)((uVar1 >> 8 & 0xff) + param_6) << 8 ^
             (uint)*(byte *)((uVar1 >> 0x10 & 0xff) + param_7) << 0x10;
  uVar1 = *param_2;
  *param_2 = (uint)CONCAT11(*(undefined1 *)((uVar1 >> 8 & 0xff) + param_6),
                            *(undefined1 *)((uVar1 & 0xff) + param_5)) ^
             (uint)*(byte *)(param_8 + (uVar1 >> 0x18)) << 0x18 ^
             (uint)*(byte *)((uVar1 >> 0x10 & 0xff) + param_7) << 0x10;
  uVar1 = *param_3;
  *param_3 = (uint)*(byte *)((uVar1 >> 0x10 & 0xff) + param_7) << 0x10 ^
             (uint)*(byte *)((uVar1 >> 0x18) + param_8) << 0x18 ^
             (uint)*(byte *)((uVar1 & 0xff) + param_5) ^
             (uint)*(byte *)((uVar1 >> 8 & 0xff) + param_6) << 8;
  uVar1 = *param_4;
  *param_4 = (uint)*(byte *)(param_7 + (uVar1 >> 0x10 & 0xff)) << 0x10 ^
             (uint)*(byte *)(param_8 + (uVar1 >> 0x18)) << 0x18 ^
             (uint)*(byte *)(param_5 + (uVar1 & 0xff)) ^
             (uint)*(byte *)(param_6 + (uVar1 >> 8 & 0xff)) << 8;
  return;
}


