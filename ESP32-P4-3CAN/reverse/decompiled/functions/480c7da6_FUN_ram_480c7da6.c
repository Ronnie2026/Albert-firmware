/* Firmware entry: 0x480c7da6 */

void FUN_ram_480c7da6(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [3];
  undefined1 uStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(char *)(param_2 + 0xa0) == '\0') && (*(char *)(param_1 + 0x246) != '\0')) &&
     (*(char *)(param_1 + 0x24b) == '\0')) {
    uVar8 = (uint)*(ushort *)(param_1 + 0x23c);
    uVar5 = *(uint *)(param_1 + 0x210);
    uVar4 = uVar8 * 100;
    if (uVar4 <= uVar5) {
      uVar3 = (uint)*(byte *)(param_1 + 0x243);
      uVar9 = (uint)*(byte *)(param_1 + 0x244);
      if (((int)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x20) == 0) &&
         (uVar5 * uVar3 <= (uVar3 * 100 + uVar9) * uVar8)) {
        uStack_28 = *(undefined4 *)(param_1 + 0x1f8);
        uStack_2c = *(undefined4 *)(param_1 + 500);
        local_30 = CONCAT31(local_30._1_3_,1);
        if (uVar8 == 0) {
          uVar1 = 0;
          auStack_24[1] = 0;
        }
        else {
          uVar1 = 0;
          if (uVar5 != uVar4) {
            uVar1 = ((uVar5 + uVar8 * -100) * uVar3 + (uVar8 - 1)) / uVar8;
            if (uVar9 < uVar1) {
              uVar1 = uVar9;
            }
            uVar1 = uVar1 & 0xff;
          }
          auStack_24[1] = 0;
          if (uVar4 < *(uint *)(param_1 + 0x20c)) {
            uVar8 = ((*(uint *)(param_1 + 0x20c) + uVar8 * -100) * uVar3 + (uVar8 - 1)) / uVar8;
            if (uVar9 < uVar8) {
              uVar8 = uVar9;
            }
            auStack_24[1] = (undefined1)uVar8;
          }
        }
        uVar6 = *(undefined1 *)(param_1 + 0x249);
        auStack_24[0] = (undefined1)uVar1;
        auStack_24[2] = 0;
        goto LAB_ram_480c7dd6;
      }
    }
  }
  local_30 = (uint)local_30._1_3_ << 8;
  uStack_2c = 0;
  uStack_28 = 0;
  auStack_24 = (undefined1  [3])0x0;
  uVar6 = 0;
  uVar1 = 0;
LAB_ram_480c7dd6:
  _auStack_24 = CONCAT13(uVar6,auStack_24);
  FUN_ram_4ff3ec14(param_1 + 0x10,0xffffffff);
  *(undefined4 *)(param_1 + 0x24) = _auStack_24;
  *(int *)(param_1 + 0x18) = local_30;
  *(undefined4 *)(param_1 + 0x1c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x20) = uStack_28;
  FUN_ram_4ff3ee10(param_1 + 0x10);
  iVar10 = 0;
  if (*(char *)(param_1 + 0x189) != '\0') {
    iVar10 = *(int *)(param_1 + 0x18c);
  }
  FUN_ram_4ff3ec14(*(undefined4 *)(param_1 + 8),0xffffffff);
  *(char *)(*(int *)(param_1 + 4) + 0x810) = (char)uVar1;
  if ((*(byte *)(param_2 + 1) & 0xfd) == 0xc) {
    uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x80e) - iVar10;
    uVar8 = uVar8 & (int)~uVar8 >> 0x1f;
    if ((int)uVar8 < 0x1a) {
      uVar7 = (undefined2)uVar8;
    }
    else {
      uVar7 = 0x19;
    }
  }
  else {
    uVar7 = (undefined2)((uVar1 * iVar10) / 100);
  }
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x812) = uVar7;
  FUN_ram_4ff3ee10(uVar2);
  FUN_ram_480c7b5e(param_1);
  return;
}


