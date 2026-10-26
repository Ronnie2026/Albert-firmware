/* Firmware entry: 0x480368cc */

void FUN_ram_480368cc(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 in_a6;
  int iVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  *(undefined1 *)(param_2 + -0x393) = in_a6;
  fence();
  *(undefined1 *)(param_2 + -0x395) = 0;
  fence();
  *(undefined1 *)(param_2 + -0x398) = 0;
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  uVar6 = param_1 + 0x10U & 3;
  puVar7 = (uint *)(param_1 + 0x10U & 0xfffffffc);
  iVar8 = uVar6 << 3;
  do {
    uVar4 = 0xff << iVar8;
    uVar9 = *puVar7;
    if ((uVar9 & uVar4) == (uVar5 << iVar8 & uVar4)) {
      *puVar7 = uVar9 & ~uVar4 | (uVar5 & 0xfffffffe) << iVar8 & uVar4;
    }
    cVar3 = (char)uVar5;
    uVar5 = (int)uVar9 >> iVar8 & 0xff;
  } while ((char)((int)uVar9 >> iVar8) != cVar3);
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  iVar8 = uVar6 << 3;
  do {
    uVar4 = 0xff << iVar8;
    uVar9 = *puVar7;
    if ((uVar9 & uVar4) == (uVar5 << iVar8 & uVar4)) {
      *puVar7 = uVar9 & ~uVar4 | (uVar5 & 0xfffffffd) << iVar8 & uVar4;
    }
    cVar3 = (char)uVar5;
    uVar5 = (int)uVar9 >> iVar8 & 0xff;
  } while ((char)((int)uVar9 >> iVar8) != cVar3);
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  iVar8 = uVar6 << 3;
  do {
    uVar4 = 0xff << iVar8;
    uVar6 = *puVar7;
    if ((uVar6 & uVar4) == (uVar5 << iVar8 & uVar4)) {
      *puVar7 = uVar6 & ~uVar4 | (uVar5 & 0xfffffffb) << iVar8 & uVar4;
    }
    cVar3 = (char)uVar5;
    uVar5 = (int)uVar6 >> iVar8 & 0xff;
  } while ((char)((int)uVar6 >> iVar8) != cVar3);
  puVar2 = &DAT_ram_48222640;
  iVar8 = 0;
  do {
    uVar5 = *(uint *)(puVar2 + 4);
    uVar6 = 0xffffffff;
    if (DAT_ram_4ff6dc5f < 2) {
      uVar6 = *(uint *)(&DAT_ram_48222610 + ((uint)DAT_ram_4ff6dc5f * 3 + iVar8) * 8);
      if (-1 < (int)uVar5) goto LAB_ram_48036a56;
LAB_ram_48036a8e:
      FUN_ram_481212c6(uVar6 & 0xff,5);
    }
    else {
      if ((int)uVar5 < 0) goto LAB_ram_48036a8e;
LAB_ram_48036a56:
      bVar1 = puVar2[0x18];
      FUN_ram_481212c6(uVar5 & 0xff,3);
      FUN_ram_481214a0(uVar5 & 0xff,bVar1 ^ 1);
    }
    iVar8 = iVar8 + 1;
    puVar2 = puVar2 + 0x28;
    if (iVar8 == 3) {
      return;
    }
  } while( true );
}


