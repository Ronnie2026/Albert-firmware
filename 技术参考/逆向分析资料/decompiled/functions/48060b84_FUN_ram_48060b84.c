/* Firmware entry: 0x48060b84 */

int FUN_ram_48060b84(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6df88 == 0) {
    fence();
    DAT_ram_4ff6df84 = 0;
    return 0;
  }
  FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0xffffffff);
  if (param_2 != 0) {
    FUN_ram_480608e8(DAT_ram_4ff6df8c,param_1);
  }
  uVar1 = DAT_ram_4ff47ecc;
  fence();
  DAT_ram_4ff47ec8 = DAT_ram_4ff47ecc;
  DAT_ram_4ff6df7c = 0;
  DAT_ram_4ff6df3d = 0;
  DAT_ram_4ff6df48 = 0;
LAB_ram_48060bfe:
  do {
    iVar2 = DAT_ram_4ff6df80;
    fence();
    if (DAT_ram_4ff6b730 == DAT_ram_4ff6b734) break;
    iVar5 = DAT_ram_4ff6b730 * 0x1c;
    iVar3 = *(int *)(&DAT_ram_4ff6a930 + iVar5);
    uStack_58 = *(undefined4 *)(&DAT_ram_4ff6a934 + iVar5);
    uStack_54 = *(undefined4 *)(&DAT_ram_4ff6a938 + iVar5);
    uStack_50 = *(undefined4 *)(&DAT_ram_4ff6a93c + iVar5);
    uStack_4c = *(undefined4 *)(&DAT_ram_4ff6a940 + iVar5);
    uStack_48 = *(undefined4 *)(&DAT_ram_4ff6a944 + iVar5);
    uStack_44 = *(undefined2 *)(&DAT_ram_4ff6a948 + iVar5);
    uStack_42 = (&DAT_ram_4ff6a94a)[iVar5];
    DAT_ram_4ff6b730 = DAT_ram_4ff6b730 + 1 & 0x7f;
    fence();
    uVar4 = DAT_ram_4ff6df7c + 1;
    iStack_5c = iVar3;
    if (DAT_ram_4ff6df7c != 0) {
      iVar5 = DAT_ram_4ff6df7c * 0x1c + DAT_ram_4ff6df80;
      uVar6 = DAT_ram_4ff6df7c;
      DAT_ram_4ff6df7c = uVar4;
      do {
        uVar6 = uVar6 - 1;
        if (-1 < iVar3 - *(int *)(iVar5 + -0x1c)) {
          uStack_54 = uVar1;
          FUN_ram_4ff45158(iVar5,&iStack_5c,0x1b);
          if (uVar4 < 0x80) goto LAB_ram_48060bfe;
          goto LAB_ram_48060cb4;
        }
        FUN_ram_4ff45158(iVar5,iVar5 + -0x1c,0x1b);
        iVar5 = iVar5 + -0x1c;
      } while (uVar6 != 0);
      uStack_54 = uVar1;
      FUN_ram_4ff45158(iVar2,&iStack_5c,0x1b);
      if (0x7f < uVar4) break;
      goto LAB_ram_48060bfe;
    }
    uStack_54 = uVar1;
    DAT_ram_4ff6df7c = uVar4;
    FUN_ram_4ff45158(DAT_ram_4ff6df80,&iStack_5c,0x1b);
  } while( true );
LAB_ram_48060cb4:
  if (DAT_ram_4ff6df78 != DAT_ram_4ff6b738) {
    DAT_ram_4ff6df3a = 1;
  }
  DAT_ram_4ff6df78 = DAT_ram_4ff6b738;
  DAT_ram_4ff6df39 = 1;
  if (DAT_ram_4ff6df7c == 0) {
    fence();
    fence();
    if (DAT_ram_4ff6b730 == DAT_ram_4ff6b734) goto LAB_ram_48060cf0;
  }
  fence();
  DAT_ram_4ff47ed0 = 0;
LAB_ram_48060cf0:
  FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
  fence();
  DAT_ram_4ff6df84 = 0;
  return param_2;
}


