/* Firmware entry: 0x48012c42 */

undefined4 FUN_ram_48012c42(undefined1 *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_14 = param_1;
  if (param_1 == (undefined1 *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Invalid param in rpc_send_req\n",uVar3,"rpc_core");
    return 0xffffffff;
  }
  iVar5 = DAT_ram_4ff6db78 + 1;
  if (iVar5 == 0) {
    iVar5 = 1;
    iVar4 = *(int *)(param_1 + 0x128);
    DAT_ram_4ff6db78 = 1;
    *(undefined4 *)(param_1 + 4) = 1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x128);
    DAT_ram_4ff6db78 = iVar5;
    *(int *)(param_1 + 4) = iVar5;
  }
  if (iVar4 != 0) {
LAB_ram_48012c6e:
    *puStack_14 = 1;
    iVar5 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x38))
                      (DAT_ram_4ff6db8c,&puStack_14,0xffffffff,iVar5,&DAT_ram_4ff6e000,
                       *(code **)(PTR_PTR_ram_4ff47e40 + 0x38));
    if (iVar5 == 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x60))(DAT_ram_4ff6db80);
      return 0;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Failed to new app rpc req[0x%x] in tx queue\n",uVar3,
                     "rpc_core",*(undefined2 *)(puStack_14 + 2));
    goto LAB_ram_48012d60;
  }
  uVar1 = *(ushort *)(param_1 + 2);
  if (*(int *)(param_1 + 0xc) == 0) {
    if (0x184 < uVar1) goto LAB_ram_48012d9e;
LAB_ram_48012cdc:
    uVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x68))(1);
    puVar2 = PTR_PTR_ram_4ff47e40;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    (**(code **)(puVar2 + 0x6c))(uVar3,0);
    iVar4 = 0;
    piVar6 = &DAT_ram_4ff5b2c0;
    do {
      iVar5 = *piVar6;
      piVar6 = piVar6 + 2;
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 4);
        uVar3 = *(undefined4 *)(param_1 + 0xc);
        (&DAT_ram_4ff5b2c0)[iVar4 * 2] = iVar5;
        (&DAT_ram_4ff5b2c4)[iVar4 * 2] = uVar3;
        goto LAB_ram_48012c6e;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 5);
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Symc sem not registered: out of buffer space\n",uVar3
                     ,"rpc_core");
  }
  else {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x70))();
    if (uVar1 < 0x185) {
      if (*(int *)(param_1 + 0x128) == 0) goto LAB_ram_48012cdc;
    }
    else {
LAB_ram_48012d9e:
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_core","W (%lu) %s: Not able to map new request to resp id\n",uVar3,
                       "rpc_core");
    }
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: could not set sync resp sem for req[0x%x]\n",uVar3,
                   "rpc_core",*(undefined2 *)(puStack_14 + 2));
LAB_ram_48012d60:
  if (*(int *)(puStack_14 + 0xc) != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x70))();
  }
  if ((*(code **)(puStack_14 + 0x138) != (code *)0x0) && (*(int *)(puStack_14 + 0x134) != 0)) {
    (**(code **)(puStack_14 + 0x138))();
    *(undefined4 *)(puStack_14 + 0x134) = 0;
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(puStack_14);
  return 0xffffffff;
}


