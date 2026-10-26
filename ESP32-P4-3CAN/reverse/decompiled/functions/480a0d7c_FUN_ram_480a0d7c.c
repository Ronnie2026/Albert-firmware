/* Firmware entry: 0x480a0d7c */

undefined1 FUN_ram_480a0d7c(int param_1,ushort *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 uVar6;
  int iVar7;
  ushort uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)((int)param_2 + 5);
  uVar3 = 0x1ff;
  if (*param_2 < 0x200) {
    uVar3 = (uint)*param_2;
  }
  uVar4 = param_2[1];
  if (0x1ff < uVar4) {
    uVar4 = 0x1ff;
  }
  uVar5 = (ushort)(byte)param_2[2];
  if (6 < uVar5) {
    uVar5 = 6;
  }
  local_40 = CONCAT22(uVar4,(short)uVar3);
  uStack_3c = CONCAT11(bVar1,(char)uVar5);
  uVar11 = uVar3 | (uint)uVar4 << 0x10;
  uVar8 = (ushort)bVar1 << 8 | uVar5;
  if ((*(uint *)(param_1 + 0xa84) == uVar11) && (*(ushort *)(param_1 + 0xa88) == uVar8)) {
    return 1;
  }
  iVar10 = *(int *)(param_1 + 0x58);
  iVar7 = iVar10 + 0xb18;
  FUN_ram_4ff3ec14(iVar7,0xffffffff);
  cVar2 = *(char *)(iVar10 + 0xb39);
  FUN_ram_4ff3ee10(iVar7);
  if (cVar2 == '\f') {
    if (*(char *)(param_1 + 0xb36) != '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0xaec) != '\0') {
      return 0;
    }
  }
  else {
    cVar9 = '\r';
    if (cVar2 != '\x0e') goto LAB_ram_480a0e52;
  }
  cVar9 = cVar2;
LAB_ram_480a0e52:
  *(undefined4 *)(param_1 + 0xa84) = local_40;
  *(undefined2 *)(param_1 + 0xa88) = uStack_3c;
  FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
  uStack_34 = CONCAT11(bVar1,(char)uVar5);
  if ((uVar11 != *(uint *)(param_1 + 0xa74)) || (uVar8 != *(ushort *)(param_1 + 0xa78))) {
    *(undefined2 *)(param_1 + 0xa78) = uStack_34;
    *(uint *)(param_1 + 0xa74) = uVar3 | (uint)uVar4 << 0x10;
    memset((void *)(param_1 + 0x9f8),0,0x12);
    memset((void *)(param_1 + 0xa0c),0,0x12);
    *(undefined1 *)(param_1 + 0xa30) = 0;
    *(undefined1 *)(param_1 + 0xa31) = 0;
    *(undefined1 *)(param_1 + 0xa32) = 0;
    *(undefined1 *)(param_1 + 0xa33) = 0;
    *(undefined1 *)(param_1 + 0xa34) = 0;
    *(undefined1 *)(param_1 + 0xa35) = 0;
    *(undefined1 *)(param_1 + 0xa38) = 0;
    *(undefined1 *)(param_1 + 0xa39) = 0;
    *(undefined1 *)(param_1 + 0xa3a) = 0;
    *(undefined1 *)(param_1 + 0xa3b) = 0;
    *(undefined1 *)(param_1 + 0xa3c) = 0;
    *(undefined1 *)(param_1 + 0xa3d) = 0;
    *(undefined1 *)(param_1 + 0xa40) = 0;
    *(undefined1 *)(param_1 + 0xa41) = 0;
    *(undefined1 *)(param_1 + 0xa42) = 0;
    *(undefined1 *)(param_1 + 0xa43) = 0;
    *(undefined1 *)(param_1 + 0xa44) = 0;
    *(undefined1 *)(param_1 + 0xa45) = 0;
    *(undefined1 *)(param_1 + 0xa46) = 0;
    *(undefined1 *)(param_1 + 0xa47) = 0;
    *(undefined1 *)(param_1 + 0xa48) = 0;
    *(undefined1 *)(param_1 + 0xa49) = 0;
    *(undefined1 *)(param_1 + 0xa4a) = 0;
    *(undefined4 *)(param_1 + 0xa54) = 0;
    iVar7 = *(int *)(param_1 + 0xa50) + 1;
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0xa50) = iVar7;
  }
  FUN_ram_4ff3ee10(param_1 + 0xa7c);
  *(undefined2 *)(param_1 + 0xc7c) = 0;
  *(undefined1 *)(param_1 + 0xc7e) = 0;
  *(undefined4 *)(param_1 + 0xc84) = *(undefined4 *)(param_1 + 0xc80);
  if (cVar9 == '\f') {
    *(undefined4 *)(param_1 + 0x99c) = 0;
    *(undefined4 *)(param_1 + 0x9a4) = 0;
    *(undefined2 *)(param_1 + 0x992) = 0;
    *(undefined2 *)(param_1 + 0x9c6) = 0;
    *(undefined2 *)(param_1 + 0x9c8) = 0;
    *(undefined1 *)(param_1 + 0x994) = 0;
    *(undefined4 *)(param_1 + 0x998) = 0;
    *(undefined4 *)(param_1 + 0x9a0) = 0;
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    *(undefined4 *)(param_1 + 0x9ac) = 0;
    *(undefined1 *)(param_1 + 0x98d) = 0;
    *(undefined1 *)(param_1 + 0x98e) = 0;
    *(undefined1 *)(param_1 + 0x943) = 0;
    *(undefined2 *)(param_1 + 0x950) = 0;
    if ((*(char *)(param_1 + 0x98a) == '\0') && (*(char *)(param_1 + 0x98c) == '\0')) {
      *(undefined1 *)(param_1 + 0x98b) = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined1 *)(param_1 + 0x98b);
    }
    *(undefined4 *)(param_1 + 0x948) = 0;
    *(undefined4 *)(param_1 + 0xad0) = 0;
    *(undefined1 *)(param_1 + 0xad4) = 0;
    *(char *)(param_1 + 0x93e) = *(char *)(param_1 + 0x98a);
    *(char *)(param_1 + 0x940) = *(char *)(param_1 + 0x98c);
    *(undefined1 *)(param_1 + 0x93f) = uVar6;
    *(undefined1 *)(param_1 + 0x941) = 0;
    *(undefined1 *)(param_1 + 0x942) = 0;
    *(undefined2 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x958) = 0;
    *(undefined4 *)(param_1 + 0x95c) = 0;
    *(undefined4 *)(param_1 + 0x960) = 0;
    *(undefined4 *)(param_1 + 0x964) = 0;
    *(undefined4 *)(param_1 + 0x968) = 0;
    *(undefined4 *)(param_1 + 0x96c) = 0;
    *(undefined2 *)(param_1 + 0x94c) = 0;
    *(undefined1 *)(param_1 + 0xae0) = 0;
    *(undefined4 *)(param_1 + 0xae4) = 0;
    *(undefined1 *)(param_1 + 0xae8) = 0;
    *(undefined1 *)(param_1 + 0x93b) = *(undefined1 *)(param_1 + 0x988);
    *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_1 + 0x9b4);
    *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(param_1 + 0x9bc);
    *(undefined4 *)(param_1 + 0xad8) = 0x80000000;
    *(undefined4 *)(param_1 + 0xadc) = 0x80000000;
  }
  return 1;
}


