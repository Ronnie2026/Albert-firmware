/* Firmware entry: 0x4819e326 */

undefined8 FUN_ram_4819e326(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = (param_2 & 0x7ff00000) + 0xfcc00000;
  if (iVar1 < 1) {
    uVar2 = -iVar1 >> 0x14;
    if (0x13 < (int)uVar2) {
      uVar3 = 1;
      if ((int)(uVar2 - 0x14) < 0x1f) {
        uVar3 = 0x80000000 >> (uVar2 - 0x14 & 0x1f);
      }
      iVar1 = 0;
      goto LAB_ram_4819e366;
    }
    iVar1 = 0x80000 >> (uVar2 & 0x1f);
  }
  uVar3 = 0;
LAB_ram_4819e366:
  return CONCAT44(iVar1,uVar3);
}


