/* Firmware entry: 0x4817a06c */

int FUN_ram_4817a06c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint *param_6,undefined4 param_7,undefined4 param_8,
                    uint param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_480 [63];
  byte abStack_441 [1037];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_1 + 0x70) == 1) && (uVar7 = *(uint *)(param_1 + 4), uVar7 - 0x10 < 0x3f1)) {
    FUN_ram_4817697e(*(undefined4 *)(param_1 + 0x74));
    iVar1 = FUN_ram_48176d4c();
    if ((iVar1 != 0) && (uVar9 = (iVar1 + 1) * 2, uVar9 <= uVar7)) {
      iVar2 = FUN_ram_481796e2(param_1,param_2,param_3,param_7,abStack_441 + 1);
      if (iVar2 == 0) {
        iVar8 = (uVar7 - 1) - iVar1;
        iVar2 = FUN_ram_48178b3a(abStack_441 + 2,iVar1,abStack_441 + iVar1 + 2,iVar8,
                                 *(undefined4 *)(param_1 + 0x74));
        if ((iVar2 == 0) &&
           (iVar2 = FUN_ram_48178b3a(abStack_441 + iVar1 + 2,iVar8,abStack_441 + 2,iVar1,
                                     *(undefined4 *)(param_1 + 0x74)), iVar2 == 0)) {
          iVar2 = FUN_ram_4817697e(*(undefined4 *)(param_1 + 0x74));
          if (iVar2 == 0) {
            iVar2 = -0x4080;
          }
          else {
            iVar2 = FUN_ram_48176cf2(iVar2,param_4,param_5,auStack_480);
            if (iVar2 == 0) {
              uVar3 = FUN_ram_481723ca(auStack_480,abStack_441 + iVar1 + 2,iVar1);
              uVar5 = 0xffffffff;
              pbVar4 = abStack_441 + iVar1 + 2 + iVar1;
              iVar1 = uVar7 - (uVar9 - 2);
              if (iVar1 != 2) {
                iVar8 = 0;
                pbVar6 = pbVar4;
                do {
                  uVar5 = uVar5 & ~((int)(-(uint)*pbVar6 | -(uint)(*pbVar6 >> 1)) >> 0x1f);
                  pbVar6 = pbVar6 + 1;
                  iVar8 = iVar8 + (uVar5 & 1);
                } while (pbVar6 != pbVar4 + iVar1 + -2);
                pbVar4 = pbVar4 + iVar8;
              }
              if ((int)(-(uint)(*pbVar4 >> 1) |
                       -uVar3 | -(uint)abStack_441[1] | -(uint)(abStack_441[1] >> 1) | -(uVar3 >> 1)
                       | -(*pbVar4 ^ 1)) < 0) {
                iVar2 = -0x4100;
              }
              else {
                uVar7 = uVar7 - (int)(pbVar4 + (1 - (int)(abStack_441 + 1)));
                if (param_9 < uVar7) {
                  iVar2 = -0x4400;
                }
                else {
                  *param_6 = uVar7;
                  if (uVar7 != 0) {
                    FUN_ram_4ff45158(param_8);
                  }
                }
              }
            }
          }
        }
      }
      FUN_ram_48178af2(abStack_441 + 1,0x400);
      FUN_ram_48178af2(auStack_480,0x40);
      return iVar2;
    }
  }
  return -0x4080;
}


