/* Firmware entry: 0x48168656 */

undefined4 FUN_ram_48168656(int *param_1)

{
  undefined4 uVar1;
  int aiStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    uVar1 = 0;
    if (param_1[0x20] == 6) {
      if (*param_1 < param_1[2]) {
        aiStack_14[0] = param_1[0xe];
        if (aiStack_14[0] == 0) {
          param_1[0x1c] = 0;
          uVar1 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"HTTP_CLIENT",
                           "W (%lu) %s: This request requires authentication, but does not provide header information for that\n"
                           ,uVar1,"HTTP_CLIENT");
          uVar1 = 0x106;
        }
        else {
          FUN_ram_481694da(aiStack_14);
          param_1[0x1c] = 0;
          *param_1 = *param_1 + 1;
          uVar1 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                           "E (%lu) %s: This authentication method is not supported: %s\n",uVar1,
                           "HTTP_CLIENT",aiStack_14[0]);
          uVar1 = 0x106;
        }
      }
      else {
        uVar1 = FUN_ram_4ff44d14(0);
        FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                         "E (%lu) %s: Error, reached max_authorization_retries count=%d\n",uVar1,
                         "HTTP_CLIENT",*param_1);
        uVar1 = 0xffffffff;
      }
    }
    return uVar1;
  }
  return 0x102;
}


