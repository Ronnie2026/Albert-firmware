/* Firmware entry: 0x48064fb4 */

void FUN_ram_48064fb4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) < 0) {
    return;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    uVar6 = FUN_ram_4ff21a0a();
    uVar5 = __divdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    if ((*(char *)(param_1 + 8) == '\0') || (*(int *)(param_1 + 4) < 0)) {
      return;
    }
  }
  iVar2 = 2;
  do {
    fence();
    if ((DAT_ram_4ff5ce9c & 1) == 0) {
      iStack_68 = DAT_ram_4ff5ceb0;
      uStack_64 = DAT_ram_4ff5ceb4;
      fence();
      iVar2 = DAT_ram_4ff5cea4;
      iVar3 = DAT_ram_4ff5ceac;
      iVar4 = DAT_ram_4ff5cea8;
      uVar5 = DAT_ram_4ff5cea0;
LAB_ram_4806505e:
      uVar6 = FUN_ram_4ff21a0a();
      DAT_ram_4ff5cea8 = __divdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      DAT_ram_4ff5cea0 = 1;
      DAT_ram_4ff5cea4 = 0xb;
      DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 2000;
      DAT_ram_4ff5ceb4 = 0;
      DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
      DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
      iVar1 = FUN_ram_4813630a(*(undefined4 *)(param_1 + 4));
      if (iVar1 == 0) {
        iStack_48 = iStack_68;
        *(undefined1 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        uStack_44 = uStack_64;
        uStack_58 = uVar5;
        iStack_54 = iVar2;
        iStack_50 = iVar4;
        iStack_4c = iVar3;
        FUN_ram_48064c42(&DAT_ram_4ff5ce98,&uStack_58);
      }
      else {
        uVar6 = FUN_ram_4ff21a0a();
        iVar1 = __divdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
        if (1999 < (uint)(iVar1 - *(int *)(param_1 + 0xc))) {
          FUN_ram_4ff2bc94(6,0xb);
        }
        if (iVar2 == 1) {
          uVar6 = FUN_ram_4ff21a0a();
          DAT_ram_4ff5cea8 = __divdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
          DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 2000;
          DAT_ram_4ff5ceb4 = 0;
          DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
          DAT_ram_4ff5cea0 = 1;
          DAT_ram_4ff5cea4 = iVar2;
          DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
        }
        else {
          DAT_ram_4ff5ceb0 = iStack_68;
          DAT_ram_4ff5ceb4 = uStack_64;
          DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
          DAT_ram_4ff5cea0 = uVar5;
          DAT_ram_4ff5cea4 = iVar2;
          DAT_ram_4ff5cea8 = iVar4;
          DAT_ram_4ff5ceac = iVar3;
        }
      }
      return;
    }
    if (iVar2 == 1) {
      uStack_64 = 0;
      iStack_68 = 0;
      iVar3 = 0;
      iVar4 = 0;
      iVar2 = 0;
      uVar5 = 0;
      goto LAB_ram_4806505e;
    }
    iVar2 = 1;
  } while( true );
}


