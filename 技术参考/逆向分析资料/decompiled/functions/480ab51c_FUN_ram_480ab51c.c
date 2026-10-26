/* Firmware entry: 0x480ab51c */

undefined4 FUN_ram_480ab51c(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *local_30;
  uint uStack_2c;
  uint uStack_28;
  undefined2 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  uVar8 = param_2 - 8;
  if (0xbff8 < uVar8) {
    return 0;
  }
  uVar4 = 0;
  uVar3 = 0;
  do {
    uVar7 = uVar3 + 1;
    uVar4 = uVar4 | (uint)param_1[uVar3] << ((uVar3 & 3) << 3);
    uVar3 = uVar7;
  } while (uVar7 != 4);
  if (uVar4 != 0x324b4342) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar7 = uVar3 + 1;
      uVar4 = uVar4 | (uint)param_1[uVar3] << ((uVar3 & 3) << 3);
      uVar3 = uVar7;
    } while (uVar7 != 4);
    if (uVar4 != 0x334b4342) {
      return 0;
    }
  }
  uVar4 = 0;
  uVar3 = 0;
  pbVar5 = param_1 + param_2 + -4;
  do {
    bVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar7 = uVar4 & 0x1f;
    uVar4 = uVar4 + 8;
    uVar3 = uVar3 | (uint)bVar6 << uVar7;
  } while (uVar4 != 0x20);
  uVar4 = 0xffffffff;
  pbVar5 = param_1;
  do {
    iVar1 = 8;
    uVar4 = uVar4 ^ *pbVar5;
    do {
      iVar1 = iVar1 + -1;
      uVar4 = uVar4 >> 1 ^ -(uVar4 & 1) & 0xedb88320;
    } while (iVar1 != 0);
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 != param_1 + param_2 + -4);
  if (~uVar4 != uVar3) {
    return 0;
  }
  *(undefined1 *)(param_3 + 0x937e) = 0;
  *(undefined1 *)(param_3 + 0x933d) = 0;
  *(undefined2 *)(param_3 + 0x9396) = 0;
  local_30 = param_1 + 4;
  uStack_24 = &sedeleg;
  uStack_28 = 0;
  uStack_2c = uVar8;
  FUN_ram_480a8446(&local_30,param_3);
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar7 = uVar4 + 1;
    uVar3 = uVar3 | (uint)param_1[uVar4] << ((uVar4 & 3) << 3);
    uVar4 = uVar7;
  } while (uVar7 != 4);
  if (uVar3 != 0x334b4342) goto LAB_ram_480ab648;
  FUN_ram_480a7960(&local_30,param_3 + 0x933d);
  if ((char)uStack_24 == '\0') {
    if ((uStack_24._1_1_ == '\0') || (uStack_2c <= uStack_28)) {
      bVar6 = *(byte *)(param_3 + 0x9397);
      uVar3 = uStack_28;
    }
    else {
      uVar3 = uStack_28 + 1;
      local_30[uStack_28] = *(byte *)(param_3 + 0x9396);
      bVar6 = *(byte *)(param_3 + 0x9397);
      if (uVar3 < uStack_2c) {
        local_30[uVar3] = bVar6;
        uStack_28 = uStack_28 + 2;
        goto LAB_ram_480ab69a;
      }
    }
    uStack_28 = uVar3;
    uStack_24 = (undefined *)((ushort)uStack_24 & 0xff);
  }
  else {
    if (uStack_24._1_1_ == '\0') {
      *(undefined1 *)(param_3 + 0x9396) = 0;
    }
    else if (uStack_28 < uStack_2c) {
      uVar3 = uStack_28 + 1;
      *(byte *)(param_3 + 0x9396) = local_30[uStack_28];
      if (uVar3 < uStack_2c) {
        uStack_28 = uStack_28 + 2;
        bVar6 = local_30[uVar3];
        goto LAB_ram_480ab69a;
      }
      uStack_24 = (undefined *)((ushort)uStack_24 & 0xff);
      uStack_28 = uVar3;
    }
    else {
      *(undefined1 *)(param_3 + 0x9396) = 0;
      uStack_24 = (undefined *)((ushort)uStack_24 & 0xff);
    }
    bVar6 = 0;
  }
LAB_ram_480ab69a:
  *(byte *)(param_3 + 0x9397) = bVar6;
  FUN_ram_480a82da(&local_30,param_3 + 0x937e);
LAB_ram_480ab648:
  if ((uStack_24._1_1_ != '\0') && (uStack_28 == uVar8)) {
    uVar2 = FUN_ram_4807a228(param_3);
    return uVar2;
  }
  return 0;
}


