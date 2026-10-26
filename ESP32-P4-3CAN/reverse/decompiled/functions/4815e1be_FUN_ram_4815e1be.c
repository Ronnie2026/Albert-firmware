/* Firmware entry: 0x4815e1be */

undefined4 FUN_ram_4815e1be(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  pcVar1 = (char *)*param_1;
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0x102;
  }
  else {
    pcVar2 = strchr(pcVar1,0x20);
    uVar3 = 0x102;
    if (pcVar2 == (char *)0x0) {
      if (param_1[3] == 0) {
        if (param_1[5] == 0) {
          return 0x102;
        }
      }
      else if (param_1[5] != 0) {
        return 0x102;
      }
      puVar4 = (undefined4 *)FUN_ram_4815e168(pcVar1);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_ram_4ff2091a(1,0x20,DAT_ram_4ff4ba0c);
        if (puVar4 == (undefined4 *)0x0) {
          return 0x101;
        }
      }
      else {
        puVar6 = DAT_ram_4ff6e278;
        if (puVar4 == DAT_ram_4ff6e278) {
          DAT_ram_4ff6e278 = (undefined4 *)puVar4[7];
        }
        else {
          do {
            puVar7 = puVar6;
            puVar6 = (undefined4 *)puVar7[7];
          } while (puVar4 != puVar6);
          puVar7[7] = puVar4[7];
        }
        thunk_FUN_ram_4ff209c6(puVar4[2]);
      }
      uVar3 = param_1[1];
      *puVar4 = *param_1;
      puVar4[1] = uVar3;
      if (param_1[2] == 0) {
        uVar3 = 0;
        if (param_1[4] != 0) {
          uVar3 = FUN_ram_4815e3e6();
          FUN_ram_4815e5fc(uVar3,param_1[4],0);
          pcVar1 = (char *)FUN_ram_4815e466(uVar3);
          pcVar1 = strdup(pcVar1);
          puVar4[2] = pcVar1;
          FUN_ram_4815e414(uVar3);
          uVar3 = param_1[4];
        }
      }
      else {
        FUN_ram_4819afd6(puVar4 + 2,&DAT_ram_481db1d4);
        uVar3 = param_1[4];
      }
      iVar5 = param_1[3];
      puVar4[5] = uVar3;
      if (iVar5 == 0) {
        uVar3 = param_1[6];
        puVar4[4] = param_1[5];
        puVar4[6] = uVar3;
      }
      else {
        puVar4[3] = iVar5;
      }
      puVar6 = DAT_ram_4ff6e278;
      if (DAT_ram_4ff6e278 == (undefined4 *)0x0) {
        puVar4[7] = 0;
        DAT_ram_4ff6e278 = puVar4;
      }
      else {
        do {
          puVar7 = puVar6;
          puVar6 = (undefined4 *)puVar7[7];
        } while (puVar6 != (undefined4 *)0x0);
        puVar4[7] = 0;
        puVar7[7] = puVar4;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


