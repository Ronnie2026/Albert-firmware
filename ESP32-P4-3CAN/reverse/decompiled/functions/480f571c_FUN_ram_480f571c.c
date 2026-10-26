/* Firmware entry: 0x480f571c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480f571c(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char cStack_49;
  undefined4 local_48 [5];
  undefined2 auStack_34 [14];
  undefined4 auStack_18 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = local_48;
  puVar9 = &DAT_ram_48222ef0;
  do {
    puVar8 = puVar9;
    puVar7 = puVar2;
    uVar3 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar3;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    puVar2 = puVar7 + 4;
    puVar9 = puVar8 + 4;
  } while (puVar8 + 4 != (undefined4 *)&UNK_ram_48222f20);
  uVar1 = *(undefined2 *)(puVar8 + 5);
  puVar7[4] = _UNK_ram_48222f20;
  *(undefined2 *)(puVar7 + 5) = uVar1;
  iVar4 = FUN_ram_48041cb4(param_1,local_48,&cStack_49);
  if (iVar4 == 0) {
    DAT_ram_4ff6dd4a = 0;
    DAT_ram_4ff6dd49 = 0;
  }
  else {
    DAT_ram_4ff6dd4a = 1;
    iVar4 = FUN_ram_480f536a(&DAT_ram_4ff60e20,local_48,DAT_ram_4ff6dd4c != param_1);
    if (iVar4 != 0) {
      if ((DAT_ram_4ff6dd4c != param_1) &&
         (DAT_ram_4ff47e60 = DAT_ram_4ff47e60 + 1, DAT_ram_4ff47e60 == 0)) {
        DAT_ram_4ff47e60 = 1;
      }
      puVar2 = &DAT_ram_4ff4894c;
      puVar9 = local_48;
      DAT_ram_4ff6dd4c = param_1;
      do {
        puVar8 = puVar9;
        puVar7 = puVar2;
        uVar6 = puVar8[1];
        uVar3 = puVar8[2];
        uVar5 = puVar8[3];
        *puVar7 = *puVar8;
        puVar7[1] = uVar6;
        puVar7[2] = uVar3;
        puVar7[3] = uVar5;
        puVar9 = puVar8 + 4;
        puVar2 = puVar7 + 4;
      } while (puVar9 != auStack_18);
      uVar1 = *(undefined2 *)(puVar8 + 5);
      puVar7[4] = *puVar9;
      *(undefined2 *)(puVar7 + 5) = uVar1;
      DAT_ram_4ff6dd49 = cStack_49;
      if (cStack_49 != '\0') {
        return iVar4;
      }
      DAT_ram_4ff5ca7c = DAT_ram_4ff5ca7c + 1;
      DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x80;
      DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
      return iVar4;
    }
  }
  return 0;
}


