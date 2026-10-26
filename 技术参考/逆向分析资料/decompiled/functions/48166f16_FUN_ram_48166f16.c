/* Firmware entry: 0x48166f16 */

int FUN_ram_48166f16(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int aiStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
  iVar8 = puVar1[4];
  aiStack_24[0] = param_1;
  if (iVar8 != 0) {
    if (param_3 < iVar8) {
      iVar8 = param_3;
    }
    FUN_ram_4ff45158(param_2,puVar1[2],iVar8);
    iVar7 = puVar1[4];
    param_3 = param_3 - iVar8;
    puVar1[2] = puVar1[2] + iVar8;
    puVar1[4] = iVar7 - iVar8;
    if ((iVar7 - iVar8 == 0) && (puVar1[3] != 0)) {
      thunk_FUN_ram_4ff209c6();
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
    }
  }
  do {
    if (param_3 < 1) {
      return iVar8;
    }
    iVar7 = *(int *)(aiStack_24[0] + 0x24);
    if (*(char *)(iVar7 + 0x2c) == '\0') {
      if (*(int *)(iVar7 + 0x14) <= *(int *)(iVar7 + 0x24)) {
        if (*(int *)(iVar7 + 0x14) != *(int *)(iVar7 + 0x24)) {
          return iVar8;
        }
        if (*(uint *)(iVar7 + 0x10) <= *(uint *)(iVar7 + 0x20)) {
          return iVar8;
        }
      }
    }
    else if (*(char *)(aiStack_24[0] + 0x7c) != '\0') {
      return iVar8;
    }
    iVar7 = *(int *)(aiStack_24[0] + 0x8c);
    if (param_3 < *(int *)(aiStack_24[0] + 0x8c)) {
      iVar7 = param_3;
    }
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0;
    iVar7 = FUN_ram_48193310(*(undefined4 *)(aiStack_24[0] + 0x1c),*puVar1,iVar7,
                             *(undefined4 *)(aiStack_24[0] + 0x88));
    if (iVar7 < 1) {
      if (iVar7 == -1) {
        if (*(char *)(*(int *)(aiStack_24[0] + 0x24) + 0x2c) == '\0') {
          piVar3 = (int *)FUN_ram_4819bf88();
          if (*piVar3 != 0) {
            uVar4 = FUN_ram_4ff44d14();
            puVar1 = (undefined4 *)FUN_ram_4819bf88();
            FUN_ram_4ff44bf0(2,"HTTP_CLIENT",
                             "W (%lu) %s: esp_transport_read returned:%d and errno:%d \n",uVar4,
                             "HTTP_CLIENT",0xffffffff,*puVar1);
          }
        }
        else {
          FUN_ram_4818d63e(*(undefined4 *)(aiStack_24[0] + 0x10),
                           *(undefined4 *)(aiStack_24[0] + 0x14),*puVar1,0);
          piVar3 = (int *)FUN_ram_4819bf88();
          if (*piVar3 != 0) {
            uVar4 = FUN_ram_4ff44d14();
            puVar1 = (undefined4 *)FUN_ram_4819bf88();
            FUN_ram_4ff44bf0(4,"HTTP_CLIENT",
                             "D (%lu) %s: esp_transport_read returned:%d and errno:%d \n",uVar4,
                             "HTTP_CLIENT",0xffffffff,*puVar1);
          }
        }
      }
      else {
        piVar3 = (int *)FUN_ram_4819bf88();
        if (*piVar3 != 0) {
          uVar4 = FUN_ram_4ff44d14();
          puVar1 = (undefined4 *)FUN_ram_4819bf88();
          FUN_ram_4ff44bf0(2,"HTTP_CLIENT",
                           "W (%lu) %s: esp_transport_read returned:%d and errno:%d \n",uVar4,
                           "HTTP_CLIENT",iVar7,*puVar1);
        }
        if (iVar7 == 0) {
          if (iVar8 != 0) {
            return iVar8;
          }
          return -0x7007;
        }
        uVar4 = FUN_ram_48193498(iVar7);
        uVar5 = FUN_ram_4ff44d14();
        uVar6 = FUN_ram_480018de(uVar4);
        FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: transport_read: error - %d | %s\n",uVar5,
                         "HTTP_CLIENT",uVar4,uVar6);
      }
      iVar7 = aiStack_24[0];
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = *(int *)(aiStack_24[0] + 0x24);
      if (*(char *)(iVar8 + 0x2c) == '\0') {
        if ((*(int *)(iVar8 + 0x20) == *(int *)(iVar8 + 0x10)) &&
           (*(int *)(iVar8 + 0x24) == *(int *)(iVar8 + 0x14))) {
          return 0;
        }
      }
      else if (*(char *)(aiStack_24[0] + 0x7c) != '\0') {
        return 0;
      }
      uVar4 = FUN_ram_48193390(*(undefined4 *)(aiStack_24[0] + 0x1c));
      if (*(code **)(iVar7 + 0x84) != (code *)0x0) {
        *(undefined4 *)(iVar7 + 0xa0) = uVar4;
        *(undefined4 *)(iVar7 + 0x98) = 0;
        *(undefined4 *)(iVar7 + 0xa4) = 0;
        *(undefined4 *)(iVar7 + 0xa8) = *(undefined4 *)(iVar7 + 0x28);
        (**(code **)(iVar7 + 0x84))(iVar7 + 0x98);
      }
      FUN_ram_481667a6(0,aiStack_24,4);
      return -1;
    }
    puVar1[5] = param_2 + iVar8;
    FUN_ram_4818d63e(*(undefined4 *)(aiStack_24[0] + 0x10),*(undefined4 *)(aiStack_24[0] + 0x14),
                     *puVar1);
    iVar7 = puVar1[4];
    puVar1[5] = 0;
    puVar1[4] = 0;
    param_3 = param_3 - iVar7;
    iVar8 = iVar8 + iVar7;
  } while( true );
}


