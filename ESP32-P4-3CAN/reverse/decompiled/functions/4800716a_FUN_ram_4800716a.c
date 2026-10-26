/* Firmware entry: 0x4800716a */

void FUN_ram_4800716a(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47e24,0xffffffff);
  if (0 < DAT_ram_4ff6daf4) {
    iVar1 = 0;
LAB_ram_480071b0:
    do {
      puVar7 = *(undefined4 **)(DAT_ram_4ff6daf8 + iVar1 * 4);
      if (puVar7 != (undefined4 *)0x0) {
        if (param_2 != 1) {
          if (param_2 == 2) {
            if ((0x3f < param_1) ||
               (uVar4 = 1 << (param_1 & 0x1f), (puVar7[(param_1 >> 5) + 9] & uVar4) == 0))
            goto LAB_ram_480071e0;
            iVar6 = puVar7[4];
          }
          else {
            if (((param_2 != 0) || (0x3f < param_1)) ||
               (uVar4 = 1 << (param_1 & 0x1f), (puVar7[(param_1 >> 5) + 5] & uVar4) == 0))
            goto LAB_ram_480071e0;
            iVar6 = puVar7[2];
          }
LAB_ram_48007244:
          puVar5 = (uint *)(iVar6 + (param_1 >> 5) * 4);
          uVar2 = *puVar7;
          uVar3 = puVar7[1];
          *puVar5 = *puVar5 | uVar4;
          FUN_ram_4800eab8(uVar2,uVar3,param_3);
          iVar1 = iVar1 + 1;
          if (DAT_ram_4ff6daf4 <= iVar1) break;
          goto LAB_ram_480071b0;
        }
        if ((param_1 < 0x40) &&
           (uVar4 = 1 << (param_1 & 0x1f), (puVar7[(param_1 >> 5) + 7] & uVar4) != 0)) {
          iVar6 = puVar7[3];
          goto LAB_ram_48007244;
        }
      }
LAB_ram_480071e0:
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_ram_4ff6daf4);
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47e24);
  return;
}


