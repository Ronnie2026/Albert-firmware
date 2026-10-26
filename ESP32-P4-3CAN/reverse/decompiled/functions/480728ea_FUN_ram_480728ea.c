/* Firmware entry: 0x480728ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_480728ea(char *param_1,size_t param_2,undefined4 param_3,uint param_4,char *param_5,
                int param_6,int param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_2bc [96];
  undefined1 auStack_13b [259];
  int iStack_38;
  undefined2 uStack_34;
  char cStack_32;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4807271e(param_2,param_3,0x180);
  uVar11 = 1;
  if ((iVar2 != 0) && (uVar11 = 2, param_4 < 0x101)) {
    pcVar6 = param_5;
    do {
      if (param_5 + param_4 == pcVar6) {
        if (0x11d < param_6 - 0xfU) {
          return 4;
        }
        puVar8 = &DAT_ram_482230e4;
        puVar7 = local_2bc;
        do {
          uVar10 = puVar8[1];
          uVar9 = puVar8[2];
          uVar11 = puVar8[3];
          uVar4 = puVar8[4];
          uVar5 = puVar8[5];
          *puVar7 = *puVar8;
          puVar7[1] = uVar10;
          puVar7[2] = uVar9;
          puVar7[3] = uVar11;
          puVar7[4] = uVar4;
          puVar7[5] = uVar5;
          puVar8 = puVar8 + 6;
          puVar7 = puVar7 + 6;
        } while (puVar8 != (undefined4 *)&DAT_ram_4822336c);
        cVar1 = param_1[0x28a];
        iVar2 = *(int *)(param_1 + 0x284);
        *puVar7 = _DAT_ram_4822336c;
        iStack_38 = iVar2 + 1;
        if (iStack_38 == 0) {
          iStack_38 = 1;
        }
        uStack_34 = (undefined2)param_6;
        cStack_32 = cVar1;
        FUN_ram_4ff45158(local_2bc,param_3,param_2);
        if (param_7 == 0) {
          if (param_4 == 0) {
            sVar3 = strlen(param_1);
            if (param_2 != sVar3) {
              return 3;
            }
            if ((param_2 != 0) && (iVar2 = FUN_ram_4ff4511a(param_3,param_1,param_2), iVar2 != 0)) {
              return 3;
            }
            FUN_ram_4ff45158(auStack_13b,param_1 + 0x181,0x101);
          }
          else {
            FUN_ram_4ff45158(auStack_13b,param_5,param_4);
          }
        }
        FUN_ram_4ff45158(param_8,local_2bc,0x28b);
        return 0;
      }
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while ((byte)(cVar1 - 0x21U) < 0x5e);
    uVar11 = 2;
  }
  return uVar11;
}


