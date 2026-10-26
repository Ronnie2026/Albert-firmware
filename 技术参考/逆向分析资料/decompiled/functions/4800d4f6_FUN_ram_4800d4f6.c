/* Firmware entry: 0x4800d4f6 */

char * FUN_ram_4800d4f6(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = *(size_t *)(param_1 + 0x10);
  iVar2 = FUN_ram_4ff45520(param_2,param_1 + 0x14,sVar1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("vfs.c",0x321,"translate_path",
                     "strncmp(src_path, vfs->path_prefix, vfs->path_prefix_len) == 0");
  }
  sVar3 = strlen(param_2);
  if (sVar1 != sVar3) {
    return param_2 + sVar1;
  }
  return "/";
}


