/* Firmware entry: 0x480422d8 */

uint FUN_ram_480422d8(undefined1 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ushort uStack_18;
  byte bStack_16;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_2 + 0xd) != '\x02') {
    return 0;
  }
  iVar3 = *param_2;
  if ((((((iVar3 - 0x102U < 2) || (iVar3 == 0x3c2)) || (iVar3 == 0x31a)) &&
       ((*(char *)((int)param_2 + 0x1b) == '\0' && (param_2[7] == 0)))) &&
      ((*(char *)((int)param_2 + 0xe) != '\0' || (param_2[4] != 0)))) &&
     ((param_4 != 0 && ((uint)(param_5 - param_3) < 0x1f5)))) {
    if (*(int *)(param_1 + 0x40) != param_4) {
      puVar5 = param_1 + 0x20;
      puVar4 = param_1;
      do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4 = puVar4 + 8;
      } while (puVar5 != puVar4);
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5 = puVar5 + 8;
      } while (puVar5 != param_1 + 0x40);
      *(int *)(param_1 + 0x40) = param_4;
      iVar3 = *param_2;
    }
    uVar6 = 0;
    if ((char)param_2[1] == '\b') {
      if (iVar3 == 0x3c2) {
        if ((*(byte *)((int)param_2 + 5) & 3) != 0) goto LAB_ram_48042314;
        if ((param_1[0x24] == '\0') || (-1 < param_3 - *(int *)(param_1 + 0x20))) {
          uVar2 = (*(byte *)((int)param_2 + 0xb) >> 2 & 3) - 1;
          *(int *)(param_1 + 0x20) = param_3;
          param_1[0x25] = (uVar2 & 0xff) < 2;
          param_1[0x26] = uVar2 == 0;
          param_1[0x24] = 1;
        }
        uVar2 = (uint)*(byte *)(param_2 + 3);
        if ((param_1[0x34] == '\0') || (-1 < param_3 - *(int *)(param_1 + 0x30))) {
          uVar2 = (uVar2 & 3) - 1;
          *(int *)(param_1 + 0x30) = param_3;
          param_1[0x35] = (uVar2 & 0xff) < 2;
          param_1[0x36] = uVar2 == 0;
          param_1[0x34] = 1;
          uVar2 = (uint)*(byte *)(param_2 + 3);
        }
        if ((param_1[0x3c] == '\0') || (-1 < param_3 - *(int *)(param_1 + 0x38))) {
          uVar2 = (uVar2 >> 2 & 3) - 1;
          *(int *)(param_1 + 0x38) = param_3;
          param_1[0x3d] = (uVar2 & 0xff) < 2;
          param_1[0x3e] = uVar2 == 0;
          param_1[0x3c] = 1;
          uVar2 = 0;
          goto LAB_ram_48042318;
        }
      }
      else {
        if (iVar3 != 0x31a) {
          bVar1 = *(byte *)((int)param_2 + 7);
          uStack_18 = 0;
          bStack_16 = 0;
          FUN_ram_4804220c(param_1,iVar3 == 0x103,
                           ((uint)*(byte *)((int)param_2 + 6) << 8 | (uint)bVar1 << 0x10) >> 0xe &
                           0xf,param_3,&uStack_18);
          FUN_ram_4804220c(param_1,(iVar3 == 0x103) + '\x02',bVar1 >> 2 & 0xf,param_3,&uStack_18);
          uVar2 = (uint)uStack_18;
          uVar6 = (uint)bStack_16;
          goto LAB_ram_48042318;
        }
        bVar1 = *(byte *)((int)param_2 + 5);
        if ((param_1[0x2c] == '\0') || (-1 < param_3 - *(int *)(param_1 + 0x28))) {
          param_1[0x2d] = (bVar1 & 6) == 0;
          param_1[0x2e] = (bVar1 & 7) == 0;
          *(int *)(param_1 + 0x28) = param_3;
          param_1[0x2c] = 1;
          uVar2 = 0;
          goto LAB_ram_48042318;
        }
      }
    }
    else {
      if (iVar3 == 0x3c2) {
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x30] = 0;
        param_1[0x31] = 0;
        param_1[0x32] = 0;
        param_1[0x33] = 0;
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x38] = 0;
        param_1[0x39] = 0;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3e] = 0;
        uVar2 = 0;
        goto LAB_ram_48042318;
      }
      if (iVar3 == 0x31a) {
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        param_1[0x2e] = 0;
        uVar2 = 0;
        goto LAB_ram_48042318;
      }
      uVar6 = (uint)(iVar3 == 0x103);
      puVar4 = param_1 + uVar6 * 8;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      param_1[uVar6 * 8 + 0x10] = 0;
      param_1[uVar6 * 8 + 0x11] = 0;
      param_1[uVar6 * 8 + 0x12] = 0;
      param_1[uVar6 * 8 + 0x13] = 0;
      param_1[uVar6 * 8 + 0x14] = 0;
      param_1[uVar6 * 8 + 0x15] = 0;
      param_1[uVar6 * 8 + 0x16] = 0;
      uVar6 = 5 << uVar6 & 0xff;
    }
    uVar2 = 0;
  }
  else {
LAB_ram_48042314:
    uVar2 = 0;
    uVar6 = 0;
  }
LAB_ram_48042318:
  return uVar2 | uVar6 << 0x10;
}


