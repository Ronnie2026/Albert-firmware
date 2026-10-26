/* Firmware entry: 0x480129c2 */

int FUN_ram_480129c2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int iStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_28 = 0;
  iStack_24 = 0;
  if (param_1 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Invalid input parameter\n",uVar1,"rpc_core");
  }
  else {
    iVar4 = *(int *)(param_1 + 300);
    if (iVar4 == 0) {
      iVar4 = 5;
    }
    uVar8 = *(ushort *)(param_1 + 2) + 0x100;
    if (uVar8 < 0x285) {
      iVar4 = 0;
      piVar7 = &DAT_ram_4ff5b2c0;
      do {
        iVar5 = *piVar7;
        piVar7 = piVar7 + 2;
        if (iVar5 == *(int *)(param_1 + 4)) {
          iVar5 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))((&DAT_ram_4ff5b2c4)[iVar4 * 2]);
          iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x70))((&DAT_ram_4ff5b2c4)[iVar4 * 2]);
          if (iVar2 != 0) {
            uVar1 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: read sem rx for resp[0x%x] destroy failed\n",
                             uVar1,"rpc_core",uVar8);
          }
          (&DAT_ram_4ff5b2c0)[iVar4 * 2] = 0;
          (&DAT_ram_4ff5b2c4)[iVar4 * 2] = 0;
          if (iVar5 != 0) {
            if (iVar5 == -5) goto LAB_ram_48012a50;
            goto LAB_ram_48012a3e;
          }
          iVar4 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x40))(DAT_ram_4ff6db90,&iStack_28,0xffffffff)
          ;
          if (iVar4 == 0) {
            if (iStack_24 != 0) {
              iVar4 = iStack_28;
              if (iStack_28 == 0) goto LAB_ram_48012a7a;
              goto LAB_ram_48012aa4;
            }
            uVar1 = FUN_ram_4ff44d14();
            pcVar6 = "E (%lu) %s: rpc Q empty or uninitialised\n";
          }
          else {
            uVar1 = FUN_ram_4ff44d14();
            pcVar6 = "E (%lu) %s: rpc Rx Q Failed to dequeue\n";
          }
          FUN_ram_4ff44bf0(1,"rpc_core",pcVar6,uVar1,"rpc_core");
          goto LAB_ram_48012a7a;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 5);
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_core","W (%lu) %s: Not able to map new request to resp id\n",uVar1,
                       "rpc_core");
    }
    else {
      uVar1 = FUN_ram_4ff44d14(param_1,iVar4);
      FUN_ram_4ff44bf0(2,"rpc_core","W (%lu) %s: Not able to map new request to resp id\n",uVar1,
                       "rpc_core");
    }
    iVar5 = -2;
LAB_ram_48012a3e:
    piVar7 = (int *)FUN_ram_4819bf88();
    if (*piVar7 == 0x74) {
LAB_ram_48012a50:
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_core","W (%lu) %s: Timeout waiting for Resp for Req[0x%x]\n",uVar1,
                       "rpc_core",*(undefined2 *)(param_1 + 2));
    }
    else {
      uVar1 = FUN_ram_4ff44d14();
      puVar3 = (undefined4 *)FUN_ram_4819bf88();
      FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: ERR [%u] ret[%d] for Req[0x%x]\n",uVar1,"rpc_core",
                       *puVar3,iVar5,*(undefined2 *)(param_1 + 2));
    }
  }
LAB_ram_48012a7a:
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Response not received for [0x%x]\n",uVar1,"rpc_core",
                   *(undefined2 *)(param_1 + 2));
  iVar4 = 0;
LAB_ram_48012aa4:
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_1);
  return iVar4;
}


