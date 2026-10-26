/* Firmware entry: 0x48058bec */

undefined4 FUN_ram_48058bec(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = *(int *)(param_1 + 0x33e8);
  if (iVar3 != 0) {
    FUN_ram_4ff3ec14(iVar3 + 0xc,0xffffffff);
    bVar1 = *(byte *)(iVar3 + 0x3bf6);
    FUN_ram_4ff3ee10(iVar3 + 0xc);
    if ((bVar1 & 6) != 0) {
      return 1;
    }
  }
  puStack_44 = (uint *)(param_1 + 0x4c5c);
  cVar2 = '\0';
LAB_ram_48058c68:
  do {
    uVar6 = *puStack_44;
joined_r0x48058c6e:
    if (uVar6 != 0) {
      iVar3 = __ctzsi2(uVar6);
      uVar6 = uVar6 & uVar6 - 1;
      if (cVar2 == '\0') break;
      while (cVar2 != '\x01') {
        if (iVar3 < 0x18) {
          cVar4 = '\x04';
          iVar5 = 2;
          goto joined_r0x48058d1a;
        }
        if (uVar6 == 0) goto LAB_ram_48058cc8;
        iVar3 = __ctzsi2(uVar6);
        uVar6 = uVar6 & uVar6 - 1;
      }
      while (0x17 < iVar3) {
        if (uVar6 == 0) {
          puStack_44 = puStack_44 + 0x48a;
          cVar2 = '\x02';
          goto LAB_ram_48058c68;
        }
        iVar3 = __ctzsi2(uVar6);
        uVar6 = uVar6 & uVar6 - 1;
      }
      cVar4 = '\x02';
      iVar5 = 1;
      goto joined_r0x48058d1a;
    }
LAB_ram_48058cc8:
    cVar2 = cVar2 + '\x01';
    if (cVar2 == '\x03') {
      return 0;
    }
    puStack_44 = puStack_44 + 0x48a;
  } while( true );
  if (iVar3 < 0x18) {
    cVar4 = '\x01';
    iVar5 = 0;
joined_r0x48058d1a:
    if (iVar3 < 0x10) {
      iVar3 = iVar3 * 0xe8 + iVar5 * 0x1228 + 0x3a40;
    }
    else {
      iVar3 = (iVar3 + -0x10) * 0x120;
      iVar5 = param_1 + iVar3;
      if ((*(char *)(iVar5 + 0x70d6) == '\0') || (*(char *)(iVar5 + 0x70b8) != cVar4))
      goto joined_r0x48058c6e;
      iVar3 = iVar3 + 0x70f0;
    }
    if (*(char *)(iVar3 + param_1 + 0x37) == '\x03') {
      return 1;
    }
  }
  goto joined_r0x48058c6e;
}


