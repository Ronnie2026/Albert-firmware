/* Firmware entry: 0x4809b562 */

void FUN_ram_4809b562(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_a0;
  int iStack_9c;
  int iStack_98;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 auStack_92 [2];
  int iStack_90;
  undefined1 auStack_8c [104];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x17ec0) != 0) {
    FUN_ram_4ff3b5f0(*(int *)(param_1 + 0x17ec0),0xffffffff);
  }
  fence();
  *(undefined1 *)(param_1 + 0x18c6b) = 0;
  fence();
  *(undefined1 *)(param_1 + 0x18c68) = 0;
  iVar2 = param_1 + 0x18;
  do {
    if (mhartid == 1) {
      FUN_ram_48095f0a(param_1,iVar2,1);
    }
    else {
      memset(auStack_92,0,0x62);
      uStack_94 = 1;
      uStack_93 = 1;
      iStack_9c = param_1;
      iStack_98 = iVar2;
      iStack_90 = FUN_ram_4ff3aca6(1,0,0,auStack_8c,3);
      if (iStack_90 != 0) {
        local_a0 = 0;
        if (*(char *)(iVar2 + 0x14) == '\x01') {
          pcVar5 = "twai0_ctl";
        }
        else {
          pcVar5 = "twai_aux_ctl";
        }
        iVar4 = FUN_ram_4ff3e458(&LAB_ram_48096c50,pcVar5,0x2000,&iStack_9c,4,&local_a0,1);
        if (iVar4 == 1) {
          FUN_ram_4ff3b5f0(iStack_90,0xffffffff);
        }
      }
    }
    if (*(int *)(iVar2 + 0x574) != 0) {
      FUN_ram_4ff3ba8e();
      *(undefined4 *)(iVar2 + 0x574) = 0;
    }
    iVar2 = iVar2 + 0x3578;
  } while (iVar2 != param_1 + 0xa080);
  puVar3 = &DAT_ram_48222640;
  iVar2 = 0;
  do {
    uVar6 = *(uint *)(puVar3 + 4);
    uVar7 = 0xffffffff;
    if (DAT_ram_4ff6dc5f < 2) {
      uVar7 = *(uint *)(&DAT_ram_48222610 + ((uint)DAT_ram_4ff6dc5f * 3 + iVar2) * 8);
      if ((int)uVar6 < 0) goto LAB_ram_4809b686;
LAB_ram_4809b61c:
      bVar1 = puVar3[0x18];
      FUN_ram_481212c6(uVar6 & 0xff,3);
      FUN_ram_481214a0(uVar6 & 0xff,bVar1 ^ 1);
    }
    else {
      if (-1 < (int)uVar6) goto LAB_ram_4809b61c;
LAB_ram_4809b686:
      FUN_ram_481212c6(uVar7 & 0xff,5);
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x28;
    if (iVar2 == 3) {
      *(undefined1 *)(param_1 + 0x18c67) = 0;
      if (*(int *)(param_1 + 0x17ec0) != 0) {
        FUN_ram_4ff3afa2(*(int *)(param_1 + 0x17ec0),0,0,0);
        FUN_ram_4ff3ba8e(*(undefined4 *)(param_1 + 0x17ec0));
        *(undefined4 *)(param_1 + 0x17ec0) = 0;
      }
      return;
    }
  } while( true );
}


